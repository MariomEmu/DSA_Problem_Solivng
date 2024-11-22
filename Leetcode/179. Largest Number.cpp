class Solution {
   static bool custom_comparator( string a, string b)
    {
        if( a + b > b + a ) return true; //compare and change position based on comperision like swap
        return false;
    }

public:
    string largestNumber(vector<int>& nums) {

       string ans;
        vector<string>A_str;
        for(auto p : nums)
        {
            A_str.push_back(to_string(p)); // convert array to string and pushback vector string

        }

      //sort using the custom comparetor
        sort(A_str.begin(), A_str.end(),custom_comparator);


       //Build the ans
        for(auto x : A_str)
        {
            ans.append(x); //concatenate all the string sorted order
            //ans+=x;
        }
        //Handale the case where the largest number 0
        if( ans[0] == '0') return "0";

        return ans;




    }
};
/*
TC
sorting technique o(nlogn) , n is number of element and sort logn
combine with string comperision o(1) if string not large
else 0(len(longest string) * nlogn) so o(k*nlogn)

sc = o(n*k)
*/

