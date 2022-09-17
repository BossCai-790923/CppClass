#include <bits/stdc++.h>
using namespace std;


int main() {

    char s[100] = "dysfunctional";
    char s1[10] = "fun";

    char* charPointer;

    charPointer = strstr(s, s1);

    printf("The substring is: %s\n", charPointer);


    if(strstr("Hello", "LL") == NULL) 
        puts("doesn't exist!");
    else
        puts("exists!");

    return 0;
}

/*
1) strstr(s, s1) returns a pointer to the found s1 in s, if s1 exsists in s; otherwise returns NULL.
2) puts(str) helps print string str to console.
*/