                                                                                                      
//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, pal = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            pal = 0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("Palindrome string");
    }
    else
    {
        printf("Not a palindrome string");
    }

    return 0;
}



