//Grades of student
#include <stdio.h>
int main()
{
    int n;
    printf("Enter marks:\n");
    scanf("%d",&n);
    if (n>=90)
    {
        printf("Grade A");
    }
    else if(n>=75)
    {
        printf("Grade B");
    }
    else if(n>=60)
    {
        printf("Grade C");
    }
    else if (n>=40)
    {
        printf("Grade D");
    }
    else

    {
        printf("Fail");
    }
}
