#include<stdio.h>
#define sz 101
int main ()
{
    {
        //bodlogo 1
        int a[sz];
        int n, i;
        scanf("%d", &n);
        for(i = 1; i <= n; i ++)
            scanf("%d", &a[i]);
        for(i = 1; i <= n; i ++)
            printf("%d ", a[i]);
        printf("\n");
    }
    {
        //bodlogo 2
        int a[sz];
        int n, i;
        scanf("%d", &n);
        for(i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        for(i = n; i >= 1; i--)
            printf("%d ", a[i]);
        printf("\n"); 
    }
    {
        //bodlogo 3
        int a[sz], b[sz], c[sz + sz];
        int n, m, i;
        scanf("%d %d", &n, &m);
        for(i = 1; i <= n; i ++)
            scanf("%d", &a[i]);
        for(i = 1; i <= m; i ++)
            scanf("%d", &b[i]);
        for(i = 1; i <= n; i ++)
            c[i] = a[i];
        for(i = 1; i <= m; i ++)
            c[n + i] = b[i];
        for(i = 1; i <= n + m; i ++)
            printf("%d ", c[i]);
    }
    {
        //bodlogo 4
        int a[sz];
        int n, x, i;
        scanf("%d", &n);
        for(i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        scanf("%d", &x);
        int b = 0;
        for(i = 1; i <= n; i ++)
        {    if(x == a[i])
            {
                printf("%d ", i);
                b = 1;
            }
        }
        if(b == 0)
        {
            printf("-1");
        }
    }
    {
        //bodlogo 5
        int a[sz];
        int n, i, usuh = 1, buurah = 1;
        scanf("%d", &n);
        for(i = 1; i <= n; i ++)
            scanf("%d", &a[i]);
        for(i = 1; i < n; i ++)
        {
            if(a[i] > a[i + 1])
            {
                usuh = 0;
            }
            if(a[i] < a[i + 1])
            {
                buurah = 0;
            }
        }
        if(usuh == 1)
        
            printf("usuhuur eremblegdsen");
        
        else if(buurah == 1)
            printf("buurahaar eremblegdsen");
        else
            printf("eremblegdeegui");
    }
    {
        //bodlogo 6
        int a[sz][sz];
        int n, m, i, j;
        scanf("%d %d", &n, &m);
        for(i = 1; i <= n; i ++)
        {
            for(j = 1; j <= m; j ++)
            scanf("%d", &a[i][j]);
        }
        int x;
        scanf("%d", &x);
        int b = 0;
        for(i = 1; i <= n; i ++)
        {
            for(j = 1; j <= m; j ++)
                if(a[i][j] == x)
                {
                    printf("%dmur %dbagana, ", i, j);
                    b = 1;
                }
        }
        if(b == 0)
            printf("-1 -1");
    }
    {
        //nemelt bodlogo
        int a[sz], b[sz];
        int n, m, i, j;
        scanf("%d", &n);
        for(i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        scanf("%d", &m);
        for(i = 1; i <= m; i++)
        {
              scanf("%d", &b[i]);
        }
        int s = 0;
        for(i = 1; i <= n; i ++)
        {
            for(j = 1; j <= m; j ++)
            {
                if(a[i] == b[j])
                {
                    printf("a massiviin %d element b massivt baina\n", a[i]);
                    s = 1;
                    break;
                }
            }
        }
        if(s == 0)
        {
            printf("oldsongui");
        }
    }
}