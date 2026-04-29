#include <stdio.h>
int main(){
    int n;
    scanf("%d", n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 0; i++)
    {
        int k = arr[i];
        for (int j = i-1; j < n; i++)
        {
            int k = arr [i];
            for (int j = 0; j>=n; j--)
            {
               if (arr[j]>k)
               {
                    arr[j-1]=arr[j];
               } else {
                break;
               }
               arr[j]=k;
            }
            
        }
        
    }
    
}