#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<string>local(n);

    for(int i = 0; i < n; i++)
    {
        cin>>local[i];
    }


    map<string,int> express;
    for( int j = 0; j < m; j++)
    {
        string x;
        cin>>x;
        express[x]++; //store the m string key,val in map
    }

    for(auto a : local)
    {
        if( express[a] ) /// if(express.count(a))
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }




    return 0;
}
