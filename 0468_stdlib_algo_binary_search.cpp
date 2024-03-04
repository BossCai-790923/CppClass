#include <bits/stdc++.h>
using namespace std;

void vector_revise() {

    vector<int> v(20);

    for(int i = 0; i < v.size(); i++)
    v[i] = (i + 1) * 2;

    for(auto i : v)
        printf("%d\t", i);
    printf("\n");

    random_shuffle(begin(v), end(v));

    for(auto i : v)
        printf("%d\t", i);
    printf("\n");

    sort(begin(v), end(v));

    for(auto i : v)
        printf("%d\t", i);
    printf("\n");

    sort(rbegin(v), rend(v));

    for(auto i : v)
        printf("%d\t", i);
    printf("\n");
}

void example1_x_in_vector() {

    vector<int> v = {2, 4, 6, 8, 8, 8, 10};

    int x = 8;

    // vector<int>::iterator iter = lower_bound(begin(v), end(v), x);
    auto iter = lower_bound(begin(v), end(v), x);

    printf("%d\n", *iter);

    int index = iter - begin(v);
    printf("index is: %d\n", index); // 3

    /*
    IMPORTANCE!! ------------------------------------------------------------
    1) lower_bound is a C++ binary_search function
    2) you can only use it on a SORTED vector / array / map / multimap
    3) if x is in the vector, the iterator returned points to the frst appearance of x.
    */

    auto iter2 = upper_bound(begin(v), end(v), x);
    printf("%d\n", *iter2);

    int index2 = iter2 - begin(v);
    printf("index is: %d\n", index2); // 3

    /*
    4) upper_bound returns a pointer which points to the value which is just after the last appearance of x.
    5) when x is in the vector, lower_bound and upper_bound return diffferent value.
    */
}


void example2_x_not_in_vector() {

    vector<int> v = {2, 4, 6, 8, 8, 8, 10};

    int x = 9;

    auto iter = lower_bound(begin(v), end(v), x);
    auto iter2 = upper_bound(begin(v), end(v), x);

    int index = iter - begin(v);
    int index2 = iter2 - begin(v);

    printf("index is: %d\n", index); // 6
    printf("index is: %d\n", index2); // 6

    /*
    IMPORTANCE!! ------------------------------------------------------------
    1) if x is NOT in the vector, the iterators returned from lower_bound & upper_bound are the same.
    They point to the position where the number should be inserted, so that the vector is still sorted.
    */

    v.insert(iter, x);

    for(auto i : v)
        printf("%d\t", i);
    printf("\n");
}

void example3_binary_search() {

    vector<int> v = {2, 4, 6, 8, 8, 8, 10};

    int x = 8;

    auto iter = lower_bound(begin(v), end(v), x);

    int index = iter - begin(v);

    if(v[index] == x)
        printf("%d is found at index: %d\n", x, index);
    else
        printf("%d not found\n", x);
}

void example4_binary_search() {

    vector<int> v = {2, 4, 6, 8, 8, 8, 10};

    int x = 8;

    if(binary_search(begin(v), end(v), x))
        printf("%d is found\n", x);
    else
        printf("%d not found\n", x);

}


int main() {

    // vector_revise();

    // example1_x_in_vector();

    // example2_x_not_in_vector();

    // example3_binary_search();

    example4_binary_search();

    return 0;
}