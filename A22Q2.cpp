#include<stdio.h>
#include<stdlib.h>
int main()
{
        int *ptr,c;
        int i=0,size=0,sum=0;
        printf("Entre size of array :");
        scanf("%d",&size);
        ptr=(int*)calloc(size,sizeof(int));
        if(ptr==NULL)
        {
                printf("Memory Allocation failed\n");
                return 0;
        }
        printf("\nThe entered %d values\n",size);
        for(i=0;i<size;i++)
        {
                scanf("%d",ptr+i);
        }
        for(i=0;i<size;i++)
        {
                sum=sum+ *(ptr+i);
        }
        printf("Averge of number is %d",sum/size);
        free(ptr);
}
