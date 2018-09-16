#include <stdio.h>
#include <time.h>








void swap(int x,int y,int *a) {
   int temp=a[x];
   a[x]=a[y];
   a[y]=temp;
}

int partition(int l,int r,int p,int *a) {
   int lp=l-1;
   int rp=r;

   while(1) {
      while(a[++lp]<p){}


      while(rp>0&&a[--rp]>p){}

      if(lp >= rp)
         break;
      else
         swap(lp,rp,&a[0]);

   }


   swap(lp,r,&a[0]);
   return lp;
}

void sort(int l,int r,int *a) {
   if(r<=l) {
      return;
   } else {
      int p=a[r];
      int pp = partition(l,r,p,&a[0]);
      sort(l,pp-1,&a[0]);
      sort(pp+1,r,&a[0]);
   }
}

int main() {
   int i,n;
scanf("%d",&n);
int *a = (int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
    a[i]=rand()%100;
    clock_t start, end;
double cpu_time_used;

start=clock();

   sort(0,n-1,&a[0]);
end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n%f",cpu_time_used);

//for(i=0;i<n;i++)
    //printf("%d ",a[i]);
}
