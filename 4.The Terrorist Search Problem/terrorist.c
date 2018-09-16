#include<stdio.h>
int main()
{
int i,j,n,m;
FILE *fp;
fp=fopen("04_01.txt","r");
fscanf(fp,"%d %d",&n,&m);
printf("%d %d\n",n, m);
int a[n][m];int d[n*m];int t,k=0,c=0;
for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            fscanf(fp,"%d ",&a[i][j]);
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
    {
        if(a[i][j]==0)
            a[i][j]==-1;
    if(a[i][j]==1)
{
terrorists(m,n,i,j,a);
c++;}

}
for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            //fscanf(fp,"%d ",&a[i][j]);
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
printf("%d ",c);}


void terrorists(int m,int n,int i,int j,int a[n][m])
{       a[i][j]=-1;int p,q,x,y,flag=0;
for(p=-1;p<=1;p++)
    for(q=-1;q<=1;q++)
{x=i+p;
y=j+q;
    if(!(x<0||y<0||x>n-1||y>m-1))
       {
           if(a[x][y]==1)
    {flag=1;
    terrorists(m,n,x,y,a);}
    else
    a[x][y]=-1;}
    }
    if(flag==0)
        return;

}



