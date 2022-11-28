#include<stdio.h>
#include<string.h>

int main()
{
char string[100];
int a;
printf("Type a string:\n");
scanf("%s",string);

printf("The length of the string is %d",strlen(string));
    return 0;
}
