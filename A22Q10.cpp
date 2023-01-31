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
        printf("\nThe entered %d values\n",size);
        for(i=0;i<size;i++)
        {
                scanf("%d",ptr+i);
        }
        for(i=0;i<size;i++)
        {
                if(max<*(ptr+i))
                max=*ptr+i;
                if(min>*(ptr+i))
                min=*(ptr+i);
        }
        printf("maxmium of number is %d\n",max);
        printf("minmun of number is %d\n",min);
        free(ptr);
}
