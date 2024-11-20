

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> frequ;
        // Calculate frequency of each element
        for (auto i : nums) {
            frequ[i]++;
        }

        // Min-heap to store pairs of (frequency, element)
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;

        // Push elements into the min-heap
        for (auto& i : frequ) {
            min_heap.push({i.second, i.first});  // Push (frequency, element)
            // If the heap exceeds size k, pop the element with the smallest frequency
            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }

        vector<int> ans;
        // Extract the top k frequent elements
        while (k--) {
            ans.push_back(min_heap.top().second); // Push element part of the pair
            min_heap.pop();
        }

        return ans;
    }
};


