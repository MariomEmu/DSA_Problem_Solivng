#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;

   map<string,int>freq;
   for(int i = 0; i < n; i++)
   {
       string vote;
       cin>>vote;
       freq[vote]++;
   }


   //find max freq
   int max_freq = 0;
   for(auto entry : freq)
   {
       max_freq = max(max_freq, entry.second);
   }

   //if(entry.second > max_freq)
   //max_freq = entry.second;

    //find max freq string which is key
    for(auto entry : freq)
    {
        if( entry.second == max_freq)
        {
            cout<<entry.first<<endl;
        }
    }




    return 0;
}
