/*
 * @lc app=leetcode.cn id=76 lang=cpp
 * @lcpr version=20003
 *
 * [76] 最小覆盖子串
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
    string minWindow(string s, string t) {
        unordered_map<char,int>need,window;
        for(char c:t)need[c]++;
        int left=0,right=0;
        int start=0,valid=0,len=INT_MAX;
        while(right<s.size()){
            char c=s[right];
            right++;
            if(need.count(c)){
                window[c]++;
                if(window[c]==need[c]) valid++;
            }

            while(valid==need.size()){
                if(right-left<len){
                    start=left;
                    len=right-left;
                }
                char d=s[left];
                left++;
                if(need.count(d)){
                    if(window[d]==need[d])valid--;
                    window[d]--;
                }
            }
        }
        return len==INT_MAX?"":s.substr(start,len);
    }
};
// @lc code=end



/*
// @lcpr case=start
// "ADOBECODEBANC"\n"ABC"\n
// @lcpr case=end

// @lcpr case=start
// "a"\n"a"\n
// @lcpr case=end

// @lcpr case=start
// "a"\n"aa"\n
// @lcpr case=end

 */

