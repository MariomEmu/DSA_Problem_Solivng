#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);

    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    for (int j = 0; j < m; ++j) {
        cin >> t[j];
    }

    map<string, bool> mp;  // Use a map to store the t strings

    // Store all strings from t in the map
    for (int j = 0; j < m; ++j) {

        mp[t[j]] = true;  // We are only interested in the presence of the string
    }

    int answer = 0;

    // Check each string in s for matching suffix
    for (int i = 0; i < n; ++i) {

        string lastThree = s[i].substr(3);  // Extract the last 3 characters
        if (mp.find(lastThree) != mp.end()) {  // Check if the suffix exists in the map
            answer += 1;
        }
    }

    cout << answer << '\n';  // Output the result
    return 0;
}
