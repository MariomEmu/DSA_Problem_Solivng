#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

void print(){

///base case
if(cnt == 3)
    return;

    cout<<cnt<<endl;

    ///cnt incremented

    cnt++;
    print();



}




int main()
{
    print();
    return 0;
}
