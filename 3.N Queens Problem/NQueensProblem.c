#include<stdio.h>
int main()
{
int n=35,a[n][n],i,j,b[n],k,c;
//scanf("%d\n",&n);
//a=(int**)malloc(n*sizeof(int*));

//for(i=0;i<n;i++)
    //a[i]=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        a[i][j]=0;
/*c=rand()%n;
if(c==0)
    b[0]=c+1;
else
    */b[0]=34;
a[0][b[0]]=1;
for(i=1;i<n;i++)
    b[i]=-1;

 i=1;
 while(i<n&&i>-1)
 {
     j=0;
     while(j<n)
     {k=0;
         while(k<i)

         {
                if(b[i]>-1)
             if(a[i][b[i]]==1)
                  {
                      a[i][b[i]]=0;
                      if(b[i]<n-1)
                         j=b[i]+1;
                      else
                        break;
                  }



             if(j!=b[k]&&j!=b[k]+i-k&&j!=b[k]-i+k)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=0;
                break;
            }
            k++;
         }

        if(a[i][j]==1)
            break;
        else
        j++;




     }
     if(j==n)
       {if(a[i][j-1]!=1)
          i--;}


     else if(a[i][j]==1)
    {b[i]=j;
    i++;
    }
 }

/*for(i=0;i<n;i++)
   printf("%d ",b[i]);
printf("\n");*/


for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
        printf("\n");
        }



}
