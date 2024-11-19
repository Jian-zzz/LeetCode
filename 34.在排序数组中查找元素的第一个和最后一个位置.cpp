/*
 * @lc app=leetcode.cn id=34 lang=cpp
 * @lcpr version=20003
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */


// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return {left_bound(nums,target),right_bound(nums,target)};
    }
    int left_bound(vector<int>& nums, int target){
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(target>nums[mid])left=mid+1;
            else if(target<nums[mid])right=mid-1;
            else if(target==nums[mid])right=mid-1;
        }
        if(left==nums.size()) return -1;
        return nums[left]==target?left:-1;
    }
    int right_bound(vector<int>& nums, int target){
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(target>nums[mid])left=mid+1;
            else if(target<nums[mid])right=mid-1;
            else if(target==nums[mid])left=mid+1;
        }
        if(right<0)return -1;
        return nums[right]==target?right:-1;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [5,7,7,8,8,10]\n8\n
// @lcpr case=end

// @lcpr case=start
// [5,7,7,8,8,10]\n6\n
// @lcpr case=end

// @lcpr case=start
// []\n0\n
// @lcpr case=end

 */

