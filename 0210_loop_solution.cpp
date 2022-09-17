#include <bits/stdc++.h>
using namespace std;

/*
Loop series: 0 1 2 ...19
Loop times : 20 times
*/
void solution1()
{
    for (int i = 0; i < 20; i++)
        cout << i << endl;

    cout << "------------------------" << endl;
}


// direction looping variable ----------------------------

/*
Loop series: 0 1 2 3 0 1 2 3 .. 0 1 2 3
Loop times : 20 times
*/
void solution2()
{
    for (int i = 0; i < 20; i++)
        cout << i % 4 << endl;

    cout << "------------------------" << endl;
}

// fill count looping variable ------------------------

/*
Loop series: 0 0 1 1 2 2 3 3 ... 9 9
Loop times : 20 times
*/
void solution3()
{
    for (int i = 0; i < 20; i++)
        cout << i / 2 << endl;

    cout << "------------------------" << endl;
}

/*
Loop series: 9 9 8 8 .. 1 1 0 0
Loop times : 20 times
*/
void solution4()
{
    for (int i = 0; i < 20; i++)
        cout << (19 - i) / 2 << endl;

    cout << "------------------------" << endl;
}

/*
Loop series: 10 9 9 8 8 .. 1 1
Loop times : unknown times.
*/
void solution5()
{
    for (int i = 0; ; i++) {

        if((20 - i) / 2 == 0)
            break;

        cout << (20 - i) / 2 << endl;
    }

    cout << "------------------------" << endl;
}


/*
Loop series: 10 9 9 8 8 .. 1 1
             0  1 2 3 0 ......
Loop times : unknown times.
*/
void solution6()
{

    int d = 0; // direction
    int c = 0; // fill count

    for (int i = 0; ; i++) {

        c = (20 - i) / 2;
        d = i % 4;

        if(c == 0)
            break;

        cout << d << " " << c << endl;
    }

    cout << "------------------------" << endl;
}





int main()
{

    // solution1();
    // solution2();
    // solution3();
    // solution4();
    // solution5();
    solution6();

    return 0;
}