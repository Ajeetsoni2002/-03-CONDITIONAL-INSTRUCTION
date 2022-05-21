#include <stdio.h>
int main()
{
        char ch;
        printf("enter the character\n");
        scanf("%c", &ch);
        if (ch <= 122 && ch >= 97)
        {
                printf("it a lowercase");
        }
        else if (ch <= 90 && ch >= 65)
        {
                printf("it is a upercase");
        }
        else if (ch <= 63 && ch >= 32)
        {
                printf("it is a symbol");
        }
        else
        {
                printf("it is not a character");
        }

        return 0;
}