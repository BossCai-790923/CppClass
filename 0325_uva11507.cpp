#include <bits/stdc++.h>
using namespace std;


class WireDirection
{

public:

    string direction = "+x";

    void bend(string bendDirection) {

        cout << "LOG - direction: " << direction << ", bendDirection: " << bendDirection;

        if(direction == "+x") {

            if(bendDirection == "+y") {
                direction = "+y";
            } 
            else if (bendDirection == "-y") {
                direction = "-y";
            } 
            else if (bendDirection == "+z") {
                direction = "+z";
            } 
            else if (bendDirection == "-z") {
                direction = "-z";
            } 

        }

        else if(direction == "-x") {

            if(bendDirection == "+y") {
                direction = "-y";
            } 
            else if (bendDirection == "-y") {
                direction = "+y";
            } 
            else if (bendDirection == "+z") {
                direction = "-z";
            } 
            else if (bendDirection == "-z") {
                direction = "+z";
            } 

        }

        else if(direction == "+y") {

            if(bendDirection == "+y") {
                direction = "-x";
            } 
            else if (bendDirection == "-y") {
                direction = "+x";
            } 
            else if (bendDirection == "+z") {
                // no change
            } 
            else if (bendDirection == "-z") {
                // no change
            } 
            
        }

        else if(direction == "-y") {

            if(bendDirection == "+y") {
                direction = "+x";
            } 
            else if (bendDirection == "-y") {
                direction = "-x";
            } 
            else if (bendDirection == "+z") {
                // no change
            } 
            else if (bendDirection == "-z") {
                // no change
            } 
            
        }

        else if(direction == "+z") {

            if(bendDirection == "+y") {
                // no change
            } 
            else if (bendDirection == "-y") {
                // no change
            } 
            else if (bendDirection == "+z") {
                direction = "-x";
            } 
            else if (bendDirection == "-z") {
                direction = "+x";
            } 
            
        }

        else if(direction == "-z") {

            if(bendDirection == "+y") {
                // no change
            } 
            else if (bendDirection == "-y") {
                // no change
            } 
            else if (bendDirection == "+z") {
                direction = "+x";
            } 
            else if (bendDirection == "-z") {
                direction = "-x";
            } 
            
        }

        cout << ". New direction : " << direction << endl;

    }
};




int main() {

    freopen("0325.txt", "r", stdin);

    int length = 0;

    while (true) {

        scanf("%d", &length);

        if(length == 0) {
            printf("LOG - length = 0, exit\n");
            break;
        }

        printf("LOG - length = %d ... \n", length);

        length--;

        vector<string> action;

        while(length--) {
            string bend;
            cin >> bend;
            action.push_back(bend);
        }

        // print LOG --------------------
        for(auto i = begin(action); i != end(action); i++)
        cout << *i << " ";

        cout << endl;
        // -----------------------------

        string finalDirection = "+x";

        // Your algo goes here 
        // .....
        
        WireDirection wd;

        for(auto str: action)
        wd.bend(str);

        finalDirection = wd.direction;

        // Print result
        cout << finalDirection << endl;

    } 

    return 0;
}