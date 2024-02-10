//NAME : GAUTAM SINGH MAHARA
// Description: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// I AM not gonna write Brute force approach because it is not efficient
//Sort then use two pointers
// Time: O(nlogn)
// Space: O(n)
// 10/02/2024

void solution(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> res;
    vector<int> sorted = nums;
    sort(sorted.begin(), sorted.end());
    int left = 0;
    int right = sorted.size()-1;
    while(left < right){
        if(sorted[left] + sorted[right] == target){
            break;
        }
        else if(sorted[left] + sorted[right] < target){
            left++;
        }
        else{
            right--;
        }
    }
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == sorted[left] || nums[i] == sorted[right]){
            res.push_back(i);
        }
    }
    return res;
}

//Approach 2
//use complement
// Time: O(n)
// Space: O(n)

void solution(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> res;
    unordered_map<int, int> map;
    for(int i = 0; i < nums.size(); i++){
        int complement = target - nums[i];
        if(map.find(complement) != map.end()){
            res.push_back(map[complement]);
            res.push_back(i);
            return res;
        }
        map[nums[i]] = i;
    }
    return res;
}
