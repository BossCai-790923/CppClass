#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[] = "Hello";

    puts(s1);   // it adds \n for you.
    
    printf("%s\n", s1);

    printf("---------------------\n");

    for(int i =0; i < strlen(s1); i++)
    putchar(s1[i]);

    puts("");

    for(int i =0; i < strlen(s1); i++)
    printf("%c", s1[i]);

}