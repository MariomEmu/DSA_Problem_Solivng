class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        int frq[26] = {0};

        ///counting frequency of each character
        for( int i = 0; i < n; i++)
        {
            if( s[i] >= 'a' && s[i] <= 'z')
            {
                frq[s[i] - 'a']++;
            }
        }


    ///Finding the first unique character
    for( int i = 0; i < n; i++)
    {
        if( frq[s[i] - 'a'] == 1)
        {
        return i;
        }
    }

      return -1;  //if no unique char is found
 }

};

/*TC = o(n)
sc = o(1) cz using constant space 25
*/
