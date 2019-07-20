#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int i,j,f,n;
    printf("Enter the number upto which you want to print: \n");
    scanf("%d",&n);
    printf("Prime Numbers are : \n");
    for(i=1;i<n;i++)
    {
        f=0;
        for(j=1; j<=n; j++)
        {
        if(i%j==0)
         f++;
        }
        if(f==2)
            printf("%d   \n", i);
            fflush(stdout);
    }
    getch();
}
