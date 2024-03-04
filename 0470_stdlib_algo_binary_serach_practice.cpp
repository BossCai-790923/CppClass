#include <bits/stdc++.h>
using namespace std;


int main() {

    multimap<string, string> authors;

    authors.insert({"AuthorA", "BookA"});
    authors.insert({"AuthorB", "BookD"});
    authors.insert({"AuthorC", "BookG"});

    authors.insert({"AuthorA", "BookB"});
    authors.insert({"AuthorB", "BookE"});
    authors.insert({"AuthorC", "BookH"});

    authors.insert({"AuthorA", "BookC"});
    authors.insert({"AuthorB", "BookF"});
    authors.insert({"AuthorC", "BookI"});


    // for(pair<string, string> p : authors)
    // for(auto p : authors)
    // cout << p.first << " -> " << p.second << endl;


    for(auto beg = authors.lower_bound("AuthorB"),
             end = authors.upper_bound("AuthorB");
        beg != end; beg++)
    
    cout << beg -> first << " -> " << beg -> second << endl;

    return 0;
}