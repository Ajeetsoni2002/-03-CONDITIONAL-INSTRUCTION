#include <stdio.h>
int main()
{
        int age;
        printf("please enter your age\n");
        scanf("%d", &age);

        if (age >= 18 && age <= 70)
        {
                printf("you can drive\n");
        }
        else if (age == 15)
        {

                printf("you are son cm");
                printf("you can drive\n");
        }
        else
        {

                printf("you can't drive");
        }

        return 0;
}