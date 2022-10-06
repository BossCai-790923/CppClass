#include <bits/stdc++.h>
using namespace std;

void full_sort() {

    int arr[] = {9, 3, 5, 4, 1};


    // old solution
    // sort(arr, arr + 5); // arr points to 9[inclusive], arr + 5 points to the 'one past the end' [exclusive]
    
    // new solution
    sort(begin(arr), end(arr));


    for(int i = 0; i < 5; i ++)
    cout << arr[i] << " ";

    cout << endl;
}

void partial_sort() {

    int arr[] = {9, 3, 5, 4, 1};

    // old solution
    // sort(arr + 1, arr + 4);

    // new solution
    sort(begin(arr) + 1, end(arr) - 1); 



    for(int i = 0; i < 5; i ++)
    cout << arr[i] << " ";

    cout << endl;
}


int main() {

    full_sort();

    partial_sort();

    return 0;
}