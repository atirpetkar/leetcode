/*
 Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.
 */

#include <map>

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    map<int , int>unique;
    for (int i = 0 ; i < nums.size(); i++){
        if (unique.find(nums[i]) != unique.end()) {
            if ((i - unique[nums[i]]) <= k) return true; //check if new_index - old_index <= k
            else unique[nums[i]] = i; //update with new position
        } else unique[nums[i]] = i; // new entry
    }
    
    return false;
}
