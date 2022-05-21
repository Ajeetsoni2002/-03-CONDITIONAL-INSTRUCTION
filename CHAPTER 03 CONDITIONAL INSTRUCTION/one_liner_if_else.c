#include <stdio.h>
int main()
{
        int a;
        printf("enter a\n");
        scanf("%d", &a);

        (a < 60  || a==80) ? printf("a is less than 60") : printf("a is not less than 60");

        return 0;
}