#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,i;
    int c=0;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("The Number entered is Prime Number.");
    }
    else
    {
        printf("The Number Entered is Not a Prime Number.");
    }
    getch();
}
