/*
 * @lc app=leetcode.cn id=438 lang=cpp
 * @lcpr version=20003
 *
 * [438] 找到字符串中所有字母异位词
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
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>window,need;
        for(char c:p)need[c]++;
        vector<int> res;
        int right=0,left=0;
        int valid=0;
        while(right<s.size()){
            char c=s[right];
            right++;
            if(need.count(c)){
                window[c]++;
                if(window[c]==need[c])valid++;  
            }

        while(valid==need.size()){
            if(right-left==p.size())res.push_back(left);
            char d=s[left];
            left++;
            if(need.count(d)){
                if(window[d]==need[d])valid--;
                window[d]--;
                }
            }
        }
        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// "cbaebabacd"\n"abc"\n
// @lcpr case=end

// @lcpr case=start
// "abab"\n"ab"\n
// @lcpr case=end

 */

