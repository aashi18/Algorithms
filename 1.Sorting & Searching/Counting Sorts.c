#include<stdio.h>
#include<time.h>
int main()
{
     clock_t start, end;
double cpu_time_used;


   int n,i,number;
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
 for(int i=1;i<=n;i++)
 {
     *(a+i)=rand();
 }

start = clock();
sort(a,n);
end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n%f",cpu_time_used);

}
void sort(int *a,int n)
{
int m=max(a,n);
m=m+1;
int i;
int *f=(int*)malloc(m*sizeof(int));
int *b=(int*)malloc(m*sizeof(int));
int *c=(int*)malloc(n*sizeof(int));
for(i=0;i<=m-1;i++)
{
*(f+i)=0;
*(b+i)=0;
}
for(i=0;i<=n-1;i++)
{
f[*(a+i)]++;
}


b[0]=f[0];
for(i=1;i<=m-1;i++)
{
b[i]=b[i-1]+f[i];
}
{
for(i=0;i<=n-1;i++)
{c[b[a[i]]-1]=a[i];
b[a[i]]--;
}

}

}
int max(int a[],int n)
{int m= a[0],i;
   for(i=1;i<=n-1;i++)
   {
       if(m<a[i])
        m=a[i];
   }
  return m;
}
