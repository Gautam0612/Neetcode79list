// GAUTAM SINGH MAHARA
// 10/02/2024
// 238. Product of Array Except Self
// Description: Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// You must write an algorithm that runs in O(n) time and without using the division operation.
//APPROACH 1
//TWO POINTER
// Time: O(n)
// Space: O(1)

void solution(){
    vector<int> nums = {1,2,3,4};
    vector<int> res(nums.size(), 1);
    int left = 1;
    int right = 1;
    for(int i = 0; i < nums.size(); i++){
        res[i] *= left;
        left *= nums[i];
        res[nums.size()-1-i] *= right;
        right *= nums[nums.size()-1-i];
    }
    return res;
}


//APPROACH 2
// Time: O(n)
// Space: O(n)
//prefix and suffix array
void solution(){
    vector<int> nums = {1,2,3,4};
    vector<int> res(nums.size(), 1);
    vector<int> prefix(nums.size(), 1);
    vector<int> suffix(nums.size(), 1);
    for(int i = 1; i < nums.size(); i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    for(int i = nums.size()-2; i >= 0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }
    for(int i = 0; i < nums.size(); i++){
        res[i] = prefix[i] * suffix[i];
    }
    return res;
}