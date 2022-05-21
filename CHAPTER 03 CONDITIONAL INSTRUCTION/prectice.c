#include <stdio.h>
int main()
{
        int marks;

        printf("enter your marks\n");
        scanf("%d", &marks);

        if (marks>=100)
        {
                printf("your marks is invalid");
        }
       else if (marks >= 90)
        {

                printf("you're A grade student\n");
        }
        else if (marks >= 80)
        {

                printf("you're B grade student\n");
        }
        else if (marks >= 70)
        {
                printf("you're grade is C\n");
        }
        else if (marks >= 60)
        {

                printf("you're grade is D\n");
        }
        else if (marks >= 50)
        {

                printf("you're grade is E\n ");
        }

        else 

        {
                 printf("you're fail");

        }

        return 0;
}