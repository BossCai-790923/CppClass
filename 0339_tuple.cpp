#include <bits/stdc++.h>
using namespace std;


int main() {

    // name, team, age, height, weight
    tuple<string, string, int, double, double> c;
    c = make_tuple("James Smith", "Cubs", 22, 73.5, 182.1);

    // get<index>(tuple)

    cout << get<0>(c) << " is "
         << get<3>(c) << " inches tall and weighs"
         << get<4>(c) << " pounds."
         << endl;

    return 0;
}