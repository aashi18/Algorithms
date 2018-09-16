#include <stdio.h>
#include<time.h>

void merging(int low,int mid,int high,int *a,int *b) {
   int l1,l2,i;

   for(l1=low,l2=mid+1,i=low;l1<=mid&&l2<=high;i++) {
      if(a[l1]<=a[l2])
         b[i]=a[l1++];
      else
         b[i]=a[l2++];
   }

   while(l1<=mid)
      b[i++]=a[l1++];

   while(l2<=high)
      b[i++]=a[l2++];

   for(i=low;i<=high;i++)
      a[i]=b[i];
}

void sort(int low,int high,int *a,int *b) {
   int mid;

   if(low < high) {
      mid=(low+high)/2;
      sort(low,mid,&a[0],&b[0]);
      sort(mid+1,high,&a[0],&b[0]);
      merging(low,mid,high,&a[0],&b[0]);
   } else {
      return;
   }
}

int main() {
   int i,n;
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   int *b=(int*)malloc(n*sizeof(int));
//int a[max],b[max];
   for(i=0;i<n;i++)
   {
       a[i]=rand()%50;

   }

clock_t start, end;
double cpu_time_used;
start = clock();



   sort(0,n,&a[0],&b[0]);

   end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n%f",cpu_time_used);



   //for(i=0;i<n;i++)
     //printf("%d ",a[i]);
}
