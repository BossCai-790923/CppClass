#include <math.h>
#include <studio.h>
#include<limits.h>
#include<float.h>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
    printf("create vector solution 1---------------------\n")
    vector<int> a(5);

    for(int i=0 ; i<5 ; i++)
        printf("%d\n",a[i]);
    
    
    printf("create vector solution 2---------------------\n")
    vector<int> b(5,3);

    for(int i=0 ; i<5 ; i++)
        printf("%d\n",b[i]);
    
    
    printf("create vector solution 3---------------------\n")
    vector<int> c(b);

    for(int i=0 ; i<5 ; i++)
        printf("%d\n",c[i]);
    
    printf("create vector solution 4----------------\n")
    int arr[] = {0,1,2,3,4};

    vector<int> d(arr,arr+5);

    for(int i=0; i<5; i++)
        printf("%d\n",d[i]);


    printf("solution5 \n")   
    vector<int> e;


    return 0
}

    