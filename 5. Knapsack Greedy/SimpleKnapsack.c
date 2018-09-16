#include<stdio.h>
int main()
{
    int i,n,j,k=0,c=0;
FILE *fp;
fp=fopen("01_c.txt","r");
fscanf(fp,"%d",&n);
fclose(fp);
printf("%d \n",n);
float  p[50];
float w[50]; float d[50];
long int capacity=0,profit=0;
int ks[50];

fp=fopen("01_p.txt","r");
for(i=0;i<10;i++)
    {if(feof(fp))
    break;
    fscanf(fp,"%f ",&p[i]);
    //printf("%d ",p[i]);
        c++;}
//printf("\n");

    fclose(fp);



    fp=fopen("01_w.txt","r");
for(i=0;i<c;i++)
    {if(feof(fp))
    break;
    fscanf(fp,"%f ",&w[i]);
    //printf("%d ",w[i]);
        }

    fclose(fp);

     for(i=0;i<c;i++)
    {
        d[i]= (float)p[i]/w[i];
        }

for (j=0; j<c; j++)
for (i=0; i<c-j-1; i++)
    if (d[i]< d[i+1]) {
swap(i,i+1,d,p,w);
}
for(i=0;i<c;i++)
    ks[i]=0;
for(i=0;i<c;i++)
    {
    if((capacity+w[i])<=n)
    {capacity+=w[i];
    //printf("%d \n",capacity);
       ks[i]=1;
       profit+=p[i];}
       else
       i=c;}


 printf("Optimal Capacity and Profit is \n%d %d",capacity,profit);
}

void swap(int x,int y,float *a,float *b,float *c) {
  float temp1; float temp2,temp3;
   temp1=a[x];
   a[x]=a[y];
   a[y]=temp1;

   temp2=b[x];
   b[x]=b[y];
   b[y]=temp2;

temp3=c[x];
c[x]=c[y];
c[y]=temp3;}
