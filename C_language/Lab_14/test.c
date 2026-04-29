// #include <stdio.h>
// #include <stdlib.h>
// int main(void){
//     int r=4, c=5;
//     int* ptr = (int *)malloc((r * c) * sizeof(int));
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             *(ptr+ i * c + j)= i * c + j;
//         }
//     }
//     for (int i = 0; i < r; i++)
//     {
//     for (int j = 0; j < c; i++)
//         {
//             printf("%d", ptr[i * c + j]);
//         }
//         printf("\n");
//     }
//     free(ptr);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
// int main(){
//     int r=4, c=5, i,k,count;
//     int** arr= (int*)malloc(r * sizeof(int*));
//     for (int i = 0; i < r; i++)
//     {
//         arr[i]=(int*)malloc(c*sizeof(int));
//     }
//     count = 0;

// }

int main(int argc, char* argv[]){
    printf("programm name is: %s", argv[0]);
    if (argc !=2)
    {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    int count=0, oguulber = 0, max=0, ug=0, end, i;
    FILE *fptr, *fp;
    fptr = fopen(argv[1],"r");
    if (fptr == NULL)
    {
        printf("Error!");
        exit(-1);
    }
    fseek(fptr, 0, SEEK_END);
    int size = ftell(fptr);
    printf("File-iin temdegtiin too: %d\n", size);
}