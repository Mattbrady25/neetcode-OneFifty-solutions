class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //create hash map
        unordered_map<int, int> prevMap;

        //loop to look for our other number needed to get our target/add to our map if a value is not already  
        //in the map
        for(int i = 0; i < nums.size(); i++)
        {
            
            //subtract the target from our current value in the array to find our number that adds to our
            //target
            int diff = target - nums[i];

            //means "I searched for diff, and the answer did not come back as not found"
            if(prevMap.find(diff) != prevMap.end())
            {
                //return our answer
                return {prevMap[diff], i};
            }

            //we did not find our answer so we add the current value and its index to the map
            prevMap.insert({nums[i], i});

        }

        //returns nothing if we cannot find two values that add up to our target
        return {};
    }   
};

