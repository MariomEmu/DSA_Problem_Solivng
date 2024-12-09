#include<bits/stdc++.h>
using namespace std;

bool  hasTwoPairs( string S)
{

 // Step 1: Create a map to count the frequency of each character
    map<char,int>freq;
    for(auto c : S)
    {
        freq[c]++;
    }

    // Step 2: Iterate through the map and check the conditions
    int countPair = 0; // To track the number of characters with frequency 2
    for(auto entry : freq)
    {
        if( entry.second == 2)
        {
            countPair++;
        }
    }

    // Step 3: Return true if exactly two characters have a frequency of 2
    return countPair==2;


}
int main()
{  string S;
    cin >> S;



    if (hasTwoPairs(S)) {
       cout << "Yes\n";
    } else {
        cout << "No\n";
    }




    return 0;
}
