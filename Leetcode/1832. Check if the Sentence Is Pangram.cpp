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


//TC = o(n) + o(26) = o(n) ;   cz o(26) is nothing but constant time nature
//SC = o(1) constant time

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
