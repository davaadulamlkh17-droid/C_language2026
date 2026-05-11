#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXQ 200005
int n, q;
typedef struct {
    int type;
    int x, l, r;
} Query;
Query queries[MAXQ];
int values[MAXQ * 3];
int comp[MAXQ * 3];
int freq[MAXQ * 3];
int bit[MAXQ * 3];
int size;

void update(int i, int val) {
    for (; i <= size; i += i & -i)
        bit[i] += val;
}

int query(int i) {
    int sum = 0;
    for (; i > 0; i -= i & -i)
        sum += bit[i];
    return sum;
}

int range_query(int l, int r) {
    return query(r) - query(l - 1);
}

int lower_bound(int x) {
    int l = 1, r = size;
    while (l <= r) {
        int m = (l + r) / 2;
        if (comp[m] >= x) r = m - 1;
        else l = m + 1;
    }
    return l;
}

int main() {
    scanf("%d %d", &n, &q);
    int idx = 0;
    for (int i = 0; i < q; i++) {
        scanf("%d", &queries[i].type);
        if (queries[i].type == 1 || queries[i].type == 2 || queries[i].type == 3) {
            scanf("%d", &queries[i].x);
            values[idx++] = queries[i].x;
        }
        else {
            scanf("%d %d", &queries[i].l, &queries[i].r);
            values[idx++] = queries[i].l;
            values[idx++] = queries[i].r;
        }
    }

    qsort(values, idx, sizeof(int), (int (*)(const void*,const void*))strcmp);

    size = 0;
    for (int i = 0; i < idx; i++) {
        if (i == 0 || values[i] != values[i - 1])
            comp[++size] = values[i];
    }
    for (int i = 0; i < q; i++) {
        if (queries[i].type == 1) {
            int id = lower_bound(queries[i].x);
            if (freq[id] == 0) update(id, 1);
            freq[id]++;
        }
        else if (queries[i].type == 2) {
            int id = lower_bound(queries[i].x);
            if (freq[id] > 0) {
                freq[id]--;
                if (freq[id] == 0) update(id, -1);
            }
        }
        else if (queries[i].type == 3) {
            int id = lower_bound(queries[i].x);
            printf("%d\n", freq[id]);
        }
        else if (queries[i].type == 4) {
            int l = lower_bound(queries[i].l);
            int r = lower_bound(queries[i].r);
            printf("%d\n", range_query(l, r));
        }
    }
    return 0;
}