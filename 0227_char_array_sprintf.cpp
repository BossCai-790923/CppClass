#include <bits/stdc++.h>
using namespace std;


int main() {

 
   // Step 1) define a char aray --------------

   char charArr[100];

   // Step 2) Assign value, use formatted string, write to char array 

   sprintf(charArr, "Pi is %.2f\n", 3.14);
   printf("charArr is: %s\n", charArr);

   printf("Pi is %8.2f\n", 3.14);
   printf("Pi is %20f\n", 3.14);
   printf("Pi is %.2f\n", 3.14);


   int a = 10, b = 20, c;
   c = a + b;
   sprintf(charArr, "sum of %d and %d is %d", a, b, c);
   printf("charArr is: %s\n", charArr);

   sprintf(charArr, "%d%d%d", a, b, c);
   printf("charArr is: %s\n", charArr);




    return 0;
}

/*
IMPORTANCE!!! -----------------------------
1) sprintf can easily help convert an int / a float to string(char array)
-------------------------------------------
*/