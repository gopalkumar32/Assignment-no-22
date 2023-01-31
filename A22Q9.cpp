#include<stdio.h>
#include<stdlib.h>
int main()
{
        int *ptr,c;
        int i=0,size=0,min=9999,max=0;
        printf("Entre size of array :");
        scanf("%d",&size);
        ptr=(int*)calloc(size,sizeof(int));
        if(ptr==NULL)
        {
                printf("Memory Allocation failed\n");
                return 0;
        }
        free(ptr);
}
