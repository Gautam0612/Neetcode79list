//NAME  : GAUTAM SINGH MAHARA
// 10/02/2024
//CONTAINS DUPLICATE
// Description: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
//APPROACH 1
//HASHMAP / SET
// Time: O(n)
// Space: O(n)

void solution(){
    vector<int> nums = {1,2,3,1};
    unordered_set<int> s;
    for(int i = 0; i < nums.size(); i++){
       if(s.count(nums[i])){
           return true;
       }
       else{
           s.insert(nums[i]);
       }
    }
    return false;
}

//APPROACH 2
//SORT
// Time: O(nlogn)
// Space: O(1)
 
 void solution(){
    vector<int> nums = {1,2,3,1};
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size()-1; i++){
        if(nums[i] == nums[i+1]){
            return true;
        }
    }
    return false;
 }