
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    multiset<int> ticPrice;

    // Read ticket prices and store them in the multiset
    for (int i = 0; i < n; i++)
    {
        int  h;
        cin >> h;
        ticPrice.insert(h);  // Insert ticket price into the multiset
    }

    // Process each customer's maximum price
    for (int i = 0; i < m; i++)
    {
        int  t;
        cin >> t;

        // Find the largest ticket price <= t
        auto it = ticPrice.upper_bound(t);

        // If no ticket can be sold to this customer
        if (it == ticPrice.begin())
        {
            cout << "-1" << endl;  // No ticket is affordable for this customer
        }
        else
        {
            --it;  // Move back to the valid ticket price (largest <= t)
            cout << *it << endl;  // Output the ticket price

            // Remove the ticket from the multiset (because it's now sold)
            ticPrice.erase(it);  // Erase the ticket from the multiset
        }
    }

    return 0;
}

//when use map it will TLE for the given constrain so we have to use multiset for efficient



/*#include<bits/stdc++.h>
using namespace std;

int main()
{

    int int  n,m;
    cin>>n>>m;

    map<int,int>ticPrice;

    for(int i = 0; i < n; i++)
    {
        int  h;
        cin>>h;
        ticPrice[h]++;
    }

    for(int i= 0; i < m; i++)
    {
        int t;
        cin>>t;

        auto it = ticPrice.upper_bound(t);
        if( it == ticPrice.begin())
        {
            cout<<"-1"<<endl;
        }
        else // there is ticket price within <= t
        {
            --it; //point to previous element simply like tree in-order predesessor; not arithmetic work
            cout<<it->first<<endl;
        }

         // Decrease the ticket count, and remove if count becomes 0
        if(--(it->second) == 0) // this --(it->second) = it->second - 1; cz it is value of map thats why just arithmetic operation performed
        {
            ticPrice.erase(it);
        }
    }


    return 0;
}
*/





















