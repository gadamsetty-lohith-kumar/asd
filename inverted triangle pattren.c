#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,k,l=0,m=1,n;
scanf("%d",&n);
k=(2*n)-1;
for(i=0;i<n;i++)
{l=0;
    for(j=0;j<(n*2)-1;j++)
    {
        if(j>=i&&j<=k)
        {
           if(l==0)
           {
           printf("%d",m);
           l=1;
           if(i%2==0)
                m++;
               else
                m--;
           }
           else
           {
               printf("*");
               l=0;
           }
        }
        else
        printf("*");

    }
    if(i%2==0)
        m=m+(n-i)-2;
    else
        m=m+(n-i)+1;
    k--;
    printf("\n");
}

}
