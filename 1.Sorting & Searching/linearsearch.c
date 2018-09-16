#include<stdio.h>
#include<time.h>

int main()
{
     clock_t start, end;
double cpu_time_used;
    int *A,lo,hi,mid,pos,i,n,key;
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
        //A[i]=rand()%50;
    key=scanf("%d",&key);

    lo=0;hi=n-1;


    start = clock();
    while(lo<=hi)
    {

        if(A[lo++]==key)
            {
            break;
            }

    }

    if(lo>hi)
        printf("key not found.");
    else
    {
        pos=lo;
        printf("%d\n",pos);
    }

    end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n%f",cpu_time_used);
for(i=0;i<n;i++)
    printf("%d ",A[i]);

    //printf("\n%d",key);

    return pos;

}
