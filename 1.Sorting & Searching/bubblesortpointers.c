#include<stdio.h>
#include<time.h>
int main()
{
     clock_t start, end;
double cpu_time_used;


   int n,i;
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
   a[i]=rand()%50;
   //for(i=0;i<n;i++)
    //printf("%d\n",a[i]);
    start = clock();
    int j,temp;
for (j=0; j<n; j++)
for (i=0; i<n-j-1; i++)
if (a[i]>a[i+1]) { // swap
temp = a[i];
a[i] = a[i+1];
a[i+1] = temp;
}
   //bubblesort(a,n);
   //for(i=0;i<n;i++)
    //printf("%d\n",a[i]);
    end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n%f",cpu_time_used);

}
//void bubblesort (int a[], int n) {

//}
