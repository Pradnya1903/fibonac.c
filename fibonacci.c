#include<stdio.h>
int main()
{
    int t1,t2,nextterm,n;
    t1=0;
    t2=1;
    nextterm = t1+t2 ;
    printf("enter value to print the fibonacci series\n");
    scanf("%d",&n);
     printf("fibonacci series :\n %d\t%d\t",t1,t2);
    
     
    while(nextterm<=n)
    {
        printf("%d\t",nextterm);
       t1=t2;
       t2=nextterm;
     nextterm=t1+t2;
    }
    return 0;
}
