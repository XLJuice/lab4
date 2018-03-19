#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char a[1024];
    printf("Enter something: ");
    scanf("%s",&a);
    int count = 0;
    int i;
    for(i=0;i<strlen(a);++i)
    {
        if(!isalpha(a[i])&& a[i]!='-')
        {

            ++count;
        }
    }
    if(count == 0)
    {
        printf("This line is a word");
    }
    else
    {
        printf("This line is not a word");
    }

    return 0;
}
