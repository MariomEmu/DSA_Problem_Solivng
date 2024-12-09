#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break; // Terminate on N = 0

        map<string, int> freq;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            freq[s]++;
        }

        int maxPair = 0;
        string balloonColor;
        for (auto balloonPair : freq) {
            if (balloonPair.second > maxPair) {
                maxPair = balloonPair.second;
                balloonColor = balloonPair.first;
            }
        }
        cout << balloonColor << endl;
    }

    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;
//this part is single test case
int main()
{
    int n;
    cin>>n;
  map<string,int>freq;

    while(n--)
    {

        string s;
          cin>>s;
          freq[s]++;
    }
     //when use range base loop it convert string to char then count each char
     // for( int i = 0; i < n; i++)

        int maxPair = 0;
        string ballonColor;
        for(auto ballonPair : freq)
        {
            if( ballonPair.second > maxPair)
            {
                maxPair = ballonPair.second;
                ballonColor = ballonPair.first;
            }
        }
        cout<<ballonColor<<endl;





    return 0;
}
*/









