
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;

   map<string,string>ipName;
   for( int i = 0; i < n; i++)
   {

       string name, ip;
       cin>>name>>ip;
      ipName[ip] = name;
   }

   while(m--)
   {
       string s1,p2;
       cin>>s1>>p2;

       p2.pop_back();

       cout<<s1<<" "<<p2<<"; #"<<ipName[p2]<<endl;
   }

    return 0;
}
