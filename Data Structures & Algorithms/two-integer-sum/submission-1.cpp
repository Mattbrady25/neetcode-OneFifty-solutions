class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //first we create a copy of the array nums
        //We do this because we need to return the original indicies
        vector<pair<int,int>> A;

        //load the new array with the values at the index, and the index itself
        //so our array will look like [{value,index}, {value,index}...etc]
        for(int i = 0; i < nums.size(); i++)
        {
            A.push_back({nums[i],i});
        }

            //sort the array in ascending order. sort goes in lexicographical order so we sort by .first 
            //if both .first values are the same, we look at the .second values
            //remember our pair [{value,index}] .first is the value in array, .second is the index
            //Ex. if we had {5, 3} and {5,1}, we would look at .second now because our values are the same

            sort(A.begin(), A.end());

            //Set the starting indicies for our "pointers"
            int left = 0; //this will start at the beginning of the array
            int right = nums.size()-1; //this will start at the end of our array

            //now we make some conditions to move our "pointers around"
    
            //prevents being on the same indicies which would go against our constraint
            //Also do not want our "pointers" crossing over each other and becoming opposites
            while(left<right)
            {
                //tracks our sum for each value
                int sum = A[left].first + A[right].first;

                if(sum == target)
                {
                    //allows us to return the smallest index 
                    return { min({A[left].second, A[right].second}), //will pick smallest
                           max({A[left].second, A[right].second})}; //will pick largest
                }
                //if our sum is not big enough, we move our pointer "left" left to the next largest number
                //since our array is in ascending order
                else if (sum < target)
                {
                    left++;
                }
                //if our sum is larger than our target, we move on our pointer "right" right 
                //to the next smallest number
                else
                {
                    right--;
                }

            }

            //return an empty vector 
            return {};
      
    }
};

