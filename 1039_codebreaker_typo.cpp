/*
 https://codebreaker.xyz/problem/typo
*/

int main() {
    ios_base::sync_with_stdio(false),cin.tie(0);//cin & cout are very slow, this line helps speed them up

    freopen("1039_codebreaker_typo.txt", "r", stdin); // Remove this line before your submit

    string s, t;
    cin >> s >> t;

    // Step 1) edge case check
    if(s.size() != t.size()) {
        cout << "No";
        return 0;
    }

    /*
    Step 2) 
    I need to find 2 adjacent pairs, say, 
    in s, there are s1,s2
    in t, there are t1,t2
    then s1 == t2; s2 == t1
    So I can just swap them, that's it.
    And all other pairs need to be the same

    So I need to compare the 4 chars 
    */
    char s1 = ' ', s2 = ' ', t1 = ' ', t2 = ' ';

    /*
    I need to define a boolean to check whether the 2 different pairs are adjacent
    Once diffStart is true, the next pair must be different also
    */
    bool diffStart = false;

    /*
    I need a int to count how many different places are there in s & t, there could only be 1 place ( 2 adjacent pairs)
    */
    int diffCount = 0;


    for(int i = 0; i < s.size(); i++) {

        if(s[i] == t[i]) {
            if(diffStart) { // last pair is different, this pair is same, not possible to make S to T
                cout << "No";
                return 0;
            }
        }
        else {
            
            if(diffCount >= 1) { // we already have 2 pairs which require a swap. We need a 2nd diff, not possible to make S to T
                cout << "No";
                return 0;
            }

            if(!diffStart) { // this is the first leg of the different pair
                s1 = s[i];
                t1 = t[i];
                diffStart = true;
            } 
            else {  // I am handling the 2nd leg of the pair
                s2 = s[i];
                t2 = t[i];

                if(s1 != t2 || s2 != t1) {
                    cout << "No";
                    return 0;
                }

                diffStart = false;
                diffCount++;
            }
        }
    }
    
    if(diffStart){
        cout << "No";
    }
    else {
        cout << "Yes";
    }

    return 0;
}