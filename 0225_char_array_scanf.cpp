#include <bits/stdc++.h>
using namespace std;


int main() {
 
   // Step 1) define a char aray --------------

   char charArr[100];

   // Step 2) assign value, read from console, write to char array --------------
   scanf("%s", charArr); 
   printf("charArr is: %s\n", charArr);

   printf("-----------------------------\n");

   char firstName[10];
   char lastName[10];
   printf("Show me your name: \n");
   scanf("%9s %9s", firstName, lastName);
   printf("Your full name is: %s %s\n", firstName, lastName);

   printf("-----------------------------\n");







    return 0;
}

/*
IMPORTANCE!!! -----------------------------
1) You don't use &charArr, because charArr is just a pointer to the 1st item of the array\
2) scanf("%s", charArr) stops as soon as it seems space / tab
3) %3s reads only 3 character if you supplies more, otherwise it reads as much as you've typed. This will easily overflow your char array.
-------------------------------------------
*/