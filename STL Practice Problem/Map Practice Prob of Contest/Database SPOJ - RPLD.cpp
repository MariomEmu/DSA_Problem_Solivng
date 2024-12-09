#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;

   for( int tc = 1; tc <= t; tc++)
   {
       int n,m;
       cin>>n>>m;
      map<pair<int,int>,bool> vis;
      bool done = 1;

      while( m--)
      {
          int a,b;
          cin>>a>>b;

          if(vis[{a,b}]) done = 0;
          vis[{a,b}] = 1;
      }

      if( done == 1) cout<<"Scenario #" <<tc<<": possible"<<endl;
      else cout<<"Scenario #" <<tc<<": impossible"<<endl;
   }



    return 0;
}
