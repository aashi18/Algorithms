#include<stdio.h>
#include<time.h>

int main()
{

clock_t start, end;
double cpu_time_used;
int n,i,j,l,temp;
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
   a[i]=rand()%50;
    start = clock();

for (i=n-1;i>=0;i--){
l=0;
for (j=0;j<=i;j++)
if (a[j]>a[l])
l=j;
if(l!=i)
{
    temp=a[i];
    a[i]=a[l];
    a[l]=temp;
}
}
end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n%f",cpu_time_used);

//for(i=0;i<n;i++)
    //printf("%d ",a[i]);

}
