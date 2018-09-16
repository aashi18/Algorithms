#include <stdio.h>
#include <stdlib.h>
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

   sort(a,n);

    end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n%f",cpu_time_used);

}

void sort(int a[],int n)
{int j,k,i,l;

  for (j=1;j<=n-1;j++)
       {k=a[j];

       i=j-1;
  while(i>=0&&(a[i]>=k))
  {
      a[i+1]=a[i];
      i--;
      }
a[i+1]=k;
}
/*for(i=0;i<=n-1;i++)
{printf("%d ",a[i]);
}*/
}

