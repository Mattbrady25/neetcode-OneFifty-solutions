class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(int num : nums)
        {
            if (seen.count(num)) 
            {
                return true;
            }

            seen.insert(num);
        }
       
       return false;
    }
};
//We create a hashmap called seen 
//We use a range-based for loop(go through every element in nums one at a time, and temporily store the current element in num)
//We do this so that we can either see if the current element being temporaly stored in num already exists in the hashtable, or we add it to the hash table if it does not.
//Adding a number to the hashmap every time it has not been seen yet, so algo grows at O(n)
//Space complexity is also O(n)
