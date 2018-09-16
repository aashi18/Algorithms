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
        A[i]=rand()%50;
    key=rand()%50;
    sort(0,n-1,&A[0]);

    lo=0;hi=n-1;

    start = clock();
    while(lo<=hi)
    {
        mid=((lo+hi)/2);
        if(A[mid]<key)
            lo=mid+1;
        else if(A[mid]>key)
            hi=mid-1;
        else break;

    }

    if(lo>hi)
        printf("key not found.");
    else
    {
        pos=mid;
        printf("%d\n",pos);
    }

    end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n%f",cpu_time_used);
//for(i=0;i<n;i++)
    //printf("%d ",A[i]);

    //printf("\n%d",key);

    return pos;

}
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
