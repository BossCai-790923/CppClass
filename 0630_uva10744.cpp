#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("0630_uva10744.txt","r",stdin);
    int tc_count;
    scanf("&d",&n);

    int repeatTimes=0;
    int survivor=0;

    list<int> l(n);
    int k=1;
    generate(begin(l), end(l), [&](){return k++;});


        auto iter = begin(l);

        while(l.size() > 1) {

            iter++;
            if(iter == end(l)) {
                repeatTimes++;
                iter = begin(l);
            }

            iter = l.erase(iter);

            if(iter == end(l)) {
                repeatTimes++;
                iter = begin(l);
            }
        }

        survivor = *begin(l);


        printf("Case %d: %d %d\n", i, repeatTimes, survivor);
    }



    return 0;
}