#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[1001];
    gets(str);
    str[0]=toupper(str[0]);
    puts(str);
}
