//Student pass or fail
#include <stdio.h>
int main()
{
    int a;
    printf("Enter marks:\n");
    scanf("%d",&a);
    if (a>=40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}
