// Gautam Singh Mahara
// 10-02-2024
// 153. Find Minimum in Rotated Sorted Array
// Description: Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [3,4,5,1,2] was rotated at least once and [0,1,2,4,5,6,7] was rotated twice. Given the sorted rotated array nums of unique elements, return the minimum element of this array.
class Solution {
public:
    int findMin(vector<int>& nums) {

    // Simple loop through
       int prev = INT_MIN;
        for(auto c : nums){
            if(c<prev){
                return c;
            }
            else{
                prev =c;
            }
        }
        return nums[0];
    }
};

    //Two pointer
    int l =0, r = nums.size()-1;
    if(nums[l] < nums[r]){
        return nums[l];
    }
    while(l <r){
        if(nums[l] >= nums[r]){
            r--;
        }
        else {
            
            break;
        }
    }
    if(r+1 < nums.size()){
    return nums[++r];
    }
    return nums[r];
    }
};
