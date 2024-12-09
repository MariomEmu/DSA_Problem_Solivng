#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q; //number of query
    cin>>q;
    map<string,int>mp;
    while(q--)
    {
        int type;
        cin>>type;
        if( type == 1)
        {
            string name;
             int marks;
             cin>>name>>marks;

             map<string,int>::iterator check=mp.find(name);
            //if the student exists, add the marks
             if( check != mp.end()) check->second +=marks;
             else
             {
                 mp.insert({name,marks});
             }


        }
        else {
            string name;
            cin>>name;
            map<string,int>::iterator itr=mp.find(name); // also use this instead of this line ,auto itr = mp.find(name);
            if( type == 2 )
            {
              //erase or delete student
              if( itr != mp.end()) mp.erase(name);

            }
            else if( type == 3 )
            {
                if( itr != mp.end()) cout<<itr->second<<endl;
                else
                    cout<< 0 <<endl;
            }
        }


    }

    return 0;
}
