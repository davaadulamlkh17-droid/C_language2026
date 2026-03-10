#include <stdio.h>
#define sz 101
void find(int a[], int n, int *addr, int *addr1){
	int i,j,t,k;
	int m=0;
	int frequent=0;
	int maxCount=0;
	for(i=0;i<n;i++){
		k=0;
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				k=1;
			}
		}
		int count=0;
		if(k==0){
			for(t=0;t<n;t++){
				if(a[i]==a[t]){
					count++;
				}
			}
			if(m<count){
				m=count;
				frequent=a[i];
				maxCount=count;
			}
		}
	}
	*addr=frequent;
	*addr1=maxCount;
		
}

int main(){
	int n,i;
	int a[sz];
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int x_e=0,y_o=0;
	
	find(a,n,&x_e,&y_o);
	
	printf("%d %d\n",x_e,y_o);

	return 0;
}