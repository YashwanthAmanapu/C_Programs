#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[1000], rev[1000];
    int i, j, count = 0;
    printf("String Before Reverse: %s", str);
    scanf("%s", &str);
    //finding the length of the string
    while (str[count] != '\0')
    {
        if (isdigit(str[count])){
        count++;
        }
    }
    j = count - 1;

    //reversing the string by swapping
    for (i = 0; i < count; i++)
    {
        rev[i] = str[j];
        j--;
    }
    printf("%c",rev);
    return 0;
}
