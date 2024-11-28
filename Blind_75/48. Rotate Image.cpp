class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i = 0; i < n-1; i++) //is this oky i < n
        {
            for(int j = i + 1; j < n; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i = 0; i < n; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }

    }
};


/*
Time Complexity: O(N*N) + O(N*N).One O(N*N) is for transposing the matrix and the other is for reversing the matrix.
total tc = o(n2)
Space Complexity: O(1).
*/








