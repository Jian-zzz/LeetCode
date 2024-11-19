/*
 * @lc app=leetcode.cn id=5 lang=cpp
 * @lcpr version=20003
 *
 * [5] 最长回文子串
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
    string longestPalindrome(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            string s1=palindrome(s,i,i);
            string s2=palindrome(s,i,i+1);
            res=res.size()>s1.size()?res:s1;
            res=res.size()>s2.size()?res:s2;
        }
        return res;
    }

private:
    string palindrome(string s,int l,int r){
        while(l>=0 && r<=s.size()-1 && s[l]==s[r]){
            l--;
            r++;
        }
        return s.substr(l+1,r-l-1);
    }
};
// @lc code=end



/*
// @lcpr case=start
// "babad"\n
// @lcpr case=end

// @lcpr case=start
// "cbbd"\n
// @lcpr case=end

 */

