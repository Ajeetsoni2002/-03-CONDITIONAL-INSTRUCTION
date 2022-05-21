#include <stdio.h>
int main()
{
        int a;

        printf("enter the value of a\n");
        scanf("%d",&a);

        if (a > 18)
        {
                printf(" you can drive\n",a);
        }
        else
        {
                printf(" you can't drive\n",a);
        }




        return 0;
}