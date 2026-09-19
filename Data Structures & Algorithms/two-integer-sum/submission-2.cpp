class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

      unordered_map<int,int> indices; // <value,index>

      //load up map
      for(int i = 0; i < nums.size(); i++)
      {
        // key first -> value second
        indices[nums[i]] = i;
      }

      //go through the map
      for(int i = 0; i < nums.size(); i++)
      {
        //we subtract our target by the first number we are on to see if our diff is in the map
        int diff = target - nums[i];
      //we check to make sure the number is in the map, and also that the number is not being used twice
        if(indices.count(diff) && indices[diff] != i) 
        {
          //we return if conditions are met
            return {i, indices[diff]};
        }

      }

      //return empty if we cannot find a pair that adds up to our target
      return {};

    }
};

