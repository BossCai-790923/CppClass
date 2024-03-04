#include <bits/stdc++.h>
using namespace std;


/*
string customer_name
int purchase_count
double total_amount
tuple<string, int, double>
*/

typedef tuple<string, int, double> customer;


int main() {

    customer c; // tuple<string, int, double>  c;
    c = make_tuple("John", 3, 100.0);

    cout << get<0>(c) 
         << " has made " << get<1>(c) << " purchases and owes $"
         << get<2>(c)
         << endl;

    get<1>(c)++;
    get<2>(c) += 50;

    cout << get<0>(c) 
         << " has made " << get<1>(c) << " purchases and owes $"
         << get<2>(c)
         << endl;


    return 0;
}