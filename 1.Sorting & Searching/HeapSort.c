#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
     clock_t start, end;
double cpu_time_used;


   int n,i;
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   for(i=0;i<n;i++)
   a[i]=rand()%50;

    start = clock();

   sort(a,n);

    end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n%f",cpu_time_used);

}
    void heapify(int a[], int n, int i)
{
    int root = i; int l,r;
    l = 2*i + 1;
     r = 2*i + 2;

    if (l <n && a[l]> a[root])
        root = l;

    if (r <n && a[r] >a[root])
        root = r;

int temp;
    if (root!= i)
    {
        temp=a[i];
        a[i]=a[root];
        a[root]=temp;


        heapify(a, n, root);
    }
}
void sort(int a[], int n)
{
    int i;
    for ( i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

 int temp;
    for ( i=n-1; i>=0; i--)
    {
        temp=a[0];
a[0]=a[i];
           a[i]=temp;
       heapify(a, i, 0);
    }
}
