#include<stdio.h>
#include<time.h>
int main()
{
int *a,*b,*arr,n,x,y;
FILE *fp;int i,j;
clock_t start, end;
double cpu_time_used;
int k;
fp=fopen("3.txt","r");
fscanf (fp,"%d",&n);
a=(int*)malloc(n*10*sizeof(int));
b=(int*)malloc(n*10*sizeof(int));
arr=(int*)malloc(n*sizeof(int));
i=0;
for(i=0;i<n*10;i++)
    {a[i]=0;b[i]=0;}
  for(i=0;i<n;i++)
        arr[i]=0;
i=0;
while(1)
{
if (feof (fp)) break;
fscanf (fp,"%d %d", &a[i],&b[i]);
i++;
}/*
//fscanf (fp,"%d %d%c%c", &a[0],&b[0],&c,&d);
int k=1;
while (1) {
if (c=='\n'&&d=='\n') break;
else
    {a[k]=d-'0';
    fscanf (fp," %d%c%c", &b[k],&c,&d);
    k++;
}}
arr

fscanf (fp,"%d %d",&x,&y);*/
//printf("i=%d",i);

printf("%d\n",n);
/*i=0;
while(a[i]!=0)
{
    printf("%d %d\n",a[i],b[i]);
    i++;
}
printf("i=%d",i);*/

x=a[i-2];y=b[i-2];
printf("%d %d\n",x,y);


fclose(fp);
i=0;
int c=0;
while(a[i]!=0)
{
  if(arr[a[i]]==0&&arr[b[i]]==0)
  {arr[a[i]]=++c;
  arr[b[i]]=arr[a[i]];}
  else if(arr[b[i]]==0)
    arr[b[i]]=arr[a[i]];
  else if(arr[a[i]]==0)
    arr[a[i]]=arr[b[i]];

else if((arr[a[i]]!=arr[b[i]]))
 {
   for(j=0;j<n;j++)
{
    if(arr[j]==arr[a[i]])
        arr[j]=arr[b[i]];
}}
i++;
}
//for(j=0;j<n;j++)
    //printf("%d ",arr[j]);

  if(arr[x]==arr[y])
        printf("%d and %d are friends",x,y);
  end = clock();
cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n Time %lf",cpu_time_used);
//matrix(n,i,a,b,arr);
/*for(i=0;i<=n-1;i++)
  {for(j=0;j<=n-1;j++)
{
    printf("%d",arr[i][j]);
} printf("\n");}*/
//int r=check(n,x,y,arr);
//printf("\n%d %d %d",x,y,r);
}
/*void matrix(int n,int k,int a[],int b[],int arr[][n])
{
int i;
for(i=0;i<=k-2;i++)
{
    arr[a[i]][b[i]]=1;
    arr[b[i]][a[i]]=1;
}}
int check(int n,int a,int b,int arr[][n])
{int i,y;
    if(arr[a][b]==1)
        return 1;
    for(i=0;i<n;i++)
    {
        if(arr[a][i]==1)
      return check(n,i,b,arr);
      else return 0;
    }
return 0;
}*/


