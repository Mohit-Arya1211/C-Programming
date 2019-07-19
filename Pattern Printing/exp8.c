#include <stdio.h>
int main()
{
    int a, b, i;
    printf("Enter number of rows: ");
    scanf("%d",&i);
    for(a=1; a<=i; ++a)
    {
        for(b=1; b<=a; ++b)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
    getch();
}
