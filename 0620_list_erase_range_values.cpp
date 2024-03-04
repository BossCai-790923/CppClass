#include <bits/stdc++.h>
using namespace std;


int main() {


    // create a list with size = 0 ---------------------------
    list<int> l(10);

    int j = 1;
    generate(begin(l), end(l), [&](){return j++;});
    for_each(begin(l), end(l), [](int i){cout << i << " ";});
    printf("\n");

    // REMOVE RANGE VALUES ==============================
    // requirement: remove range [3, 7]
    // auto iter1 = lower_bound(begin(l), end(l), 3);
    // auto iter2 = lower_bound(begin(l), end(l), 8);

    auto iter1 = begin(l);
    auto iter2 = begin(l);
    advance(iter1, 2); // points to 3
    advance(iter2, 7); // points to 8


    printf("%d %d\n", *iter1, *iter2);

    auto iter = l.erase(iter1, iter2);
    printf("%d\n", *iter);

    for_each(begin(l), end(l), [](int i){cout << i << " ";});


    return 0;
}
