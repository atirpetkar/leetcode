/*
 
 Given an array of integers, find if the array contains any duplicates. Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
 
 */


#include <set>

bool containsDuplicate(vector<int>& nums) {
    set<int> unique;
    for (int num: nums) {
        if (unique.find(num) != unique.end()) return true;
        else unique.insert(num);
    }
    
    return false;
}
