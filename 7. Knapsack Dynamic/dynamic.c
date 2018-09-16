#include<stdio.h>


int max(int a, int b)
{
 return (a > b)? a : b;
}

int knapSack(int W, int wt[], int val[], int n)
{

   if (n == 0 || W == 0)
       return 0;


   if (wt[n-1] > W)
       return knapSack(W, wt, val, n-1);
   else return max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),knapSack(W, wt, val, n-1));
}

int main()
{
    int i,n,j,k=0,c=0;
FILE *fp;
fp=fopen("01_c.txt","r");
fscanf(fp,"%d",&n);
fclose(fp);
printf("%d \n",n);
long int p[50];
long int w[50];
double x[50];
long int capacity=0,profit=0;
int ks[50];

fp=fopen("01_p.txt","r");
for(i=0;i<n;i++)
    {if(feof(fp))
    break;
    fscanf(fp,"%d ",&p[i]);
    printf("%d ",p[i]);
        c++;}
printf("\n");

    fclose(fp);

    fp=fopen("01_w.txt","r");
for(i=0;i<n;i++)
    {if(feof(fp))
    break;
    fscanf(fp,"%d ",&w[i]);
    printf("%d ",w[i]);
        }

    fclose(fp);
for(i=0;i<c;i++)
    {
        x[i]=p[i]/w[i];
    }

    printf("%d", knapSack(n, w, p, c));
    return 0;
}
