/*
 * @lc app=leetcode.cn id=567 lang=cpp
 * @lcpr version=20003
 *
 * [567] 字符串的排列
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
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>window,need;
        for(char c:s1)need[c]++;
        int left=0,right=0;
        int valid=0;
        while(right<s2.size()){
            char c=s2[right];
            right++;
            if(need.count(c)){
                window[c]++;
                if(window[c]==need[c])valid++;
            }
            while(valid==need.size()){
                    if(right-left==s1.size())return true;
                    char d=s2[left];
                    left++;
                    if(need.count(d)){
                        if(window[d]==need[d])valid--;
                        window[d]--;
                }
            }
        }
        return false;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "eidbaooo"\n
// @lcpr case=end

// @lcpr case=start
// "eidboaoo"\n
// @lcpr case=end

 */

