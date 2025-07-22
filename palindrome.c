#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

bool isPalindrome(char* s) {
    int start = 0;
    char str[strlen(s)];
    int i = 0;
    int j = 0;
    while (s[i])
    {
        if (isupper(s[i]))
        {
            str[j] = s[i] + 'a' - 'A';
            j++;
        }
        else if (islower(s[i]))
        {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    str[j] = 0;
    int len = strlen(str) - 1;
    // printf("final str = %s   len = %d--",str, len);
    while (start < len)
    {
        if (str[start] != str[len])
        {
            printf("%c === %c\n", str[start], str[len]);
            return false;
        }
        len--;
        start++;
    }
    return true;
}

int main(int ac, char **av)
{
    printf("----> %d\n", isPalindrome(av[1]));
}