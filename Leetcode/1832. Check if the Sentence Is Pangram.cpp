class Solution {
public:
    bool checkIfPangram(string sentence) {

   int frq[26] = {0};

   for( int i = 0; i < sentence.length(); i++)
   {
    if( sentence[i] >= 'A' && sentence[i] <= 'Z')
    {
        frq[sentence[i] - 'A']++;
    }
    else if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            frq[sentence[i] - 'a']++;
        }

   }

   for( int i = 0; i <= 25; i++)
   {
    if( frq[i] == 0)
    {
        return false;
    }
   }

   return true;

    }
};
