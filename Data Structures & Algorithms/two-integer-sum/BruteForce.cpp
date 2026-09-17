class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i,j};
                }
            }
        }
            return {};
    }
};

//The goal here is to find a target value from adding 2 numbers in an array
//The easiest way to do this is to start at the first index of the array, and add that value to the second, third, and fourth index value in the array one at a time.
//If we do not find a target then we move onto the second index value of the array, and add that value to the third, and fourth index value in the array one at a time.
//Each time, we are adding the two current index values we are at to see if they equal our target or not.
//If they equal our target, we return the answer with the smallest index first. The smallest index will always be i because j is always ahead of i, hence j = i + 1.
//If we do not find an answer, we return an empty vector.
