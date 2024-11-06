/*
 * @lc app=leetcode.cn id=26 lang=cpp
 * @lcpr version=20002
 *
 * [26] 删除有序数组中的重复项
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
    int removeDuplicates(vector<int>& nums) {
        int fast=0,slow=0;
        while(fast<nums.size()){
            if(nums[slow]!=nums[fast]){
                slow++;
                nums[slow]=nums[fast];
            }else{
                fast++;
            }
        }
        return {slow+1};
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,1,2]\n
// @lcpr case=end

// @lcpr case=start
// [0,0,1,1,1,2,2,3,3,4]\n
// @lcpr case=end

 */

