#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 10
int max_price;
int choose(int price[]);
void crossover(int max1,int max2,int a[][n],int price[],int p[]);
int maximum(int price[]);
int b[n],c[n];
void main(){
FILE *f1,*f2,*f3;
f1=fopen("01_w.txt","r");
f2=fopen("01_c.txt","r");
f3=fopen("01_p.txt","r");
int W;
fscanf(f2,"%d",&W);
int i,j;
int w[n],p[n],price[100],weight[100];
for(i=0;i<n;i++){
fscanf(f1,"%d",&w[i]);
fscanf(f3,"%d",&p[i]);
}
int sum=0,sum1=0;
int a[100][n];
for(i=0;i<100;i++){
do{
sum=0;
for(j=0;j<n;j++){
a[i][j]=rand()%2;
if(a[i][j]==1)
sum=sum+w[j];
}
}while(sum>W);
weight[i]=sum;
for(j=0;j<n;j++){
if(a[i][j]==1)
sum1=sum1+p[j];
}
price[i]=sum1;
sum1=0;
}
int index;
index=maximum(price);

int max1,max2;

clock_t start, end;
double cpu_time_used;
int max_array[n];
//start = clock();
int count=0;
do{
max1=choose(price);
max2=choose(price);
crossover(max1,max2,a,price,p);
index=maximum(price);
for(i=0;i<n;i++){
max_array[i]=a[index][i];
}
count++;
}
while(count<500);
for(i=0;i<n;i++)
printf("%d\t",price[i]);
int cost=0;
for(i=0;i<n;i++){
if(max_array[i]==1)
cost=cost+p[i];
}
printf("\n%d",cost);
}


int choose(int price[]){
int n1,n2,n3,max;
n1=rand()%100;
do{
n2=rand()%100;
}while(n2==n1);
if(price[n1]>price[n2])
max=n1;
else max=n2;
do{
n3=rand()%100;
}while(n3==n1||n3==n2);
if(price[n3]>price[max])
max=n3;
return max;
}

void crossover(int max1,int max2,int a[][n],int price[],int p[]){
int k=rand()%n;
int i,price1=0,price2=0;
for(i=0;i<=k;i++){
b[i]=a[max1][i];
c[i]=a[max2][i];
}
for(i=(k+1);i<n;i++){
b[i]=a[max2][i];
c[i]=a[max1][i];
}

k=rand()%n;
if(b[k]==1)
b[k]=0;
else b[k]=1;

k=rand()%n;
if(c[k]==1)
c[k]=0;
else c[k]=1;

for(i=0;i<n;i++){
if (b[i]==1)
price1=price1+p[i];
if (c[i]==1)
price2=price2+p[i];
}
if (price1>price[max1]){
for(i=0;i<n;i++)
a[max1][i]=b[i];
price[max1]=price1;
}
if (price2>price[max2]){
for(i=0;i<n;i++)
a[max2][i]=c[i];
price[max2]=price2;
}
}

int maximum(int price[]){
int m=price[0],index=0,i;
for(i=1;i<n;i++){
if(price[i]>m){
m=price[i];
index=i;
}
}
return index;
}








