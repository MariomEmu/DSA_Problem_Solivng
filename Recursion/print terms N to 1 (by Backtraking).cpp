#include<bits/stdc++.h>
using namespace std;

void func(int i, int n) {
    if (i> n)
        return;

    func(i+1, n);
       cout << i << endl; ///backtracking
}

int main() {
    int n;
    cin >> n;
    func(1,n);
    return 0;
}

///output

/*n=4
4
3
2
1*/
