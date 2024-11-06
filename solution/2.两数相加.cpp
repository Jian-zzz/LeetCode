/*
 * @lc app=leetcode.cn id=2 lang=cpp
 * @lcpr version=20002
 *
 * [2] 两数相加
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
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p1=l1;
        ListNode *p2=l2;
        ListNode *dummy = new ListNode(-1);
        ListNode *p=dummy;
        int t=0;
        while(p1!=nullptr || p2!=nullptr ||t>0){
            int val = t;
            if(p1!=nullptr){
                val+=p1->val;
                p1=p1->next;
            }
            if(p2!=nullptr){
                val+=p2->val;
                p2=p2->next;
            }
            t=val/10;
            val%=10;
            p->next=new ListNode(val);
            p=p->next;
        }
        return dummy->next;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [2,4,3]\n[5,6,4]\n
// @lcpr case=end

// @lcpr case=start
// [0]\n[0]\n
// @lcpr case=end

// @lcpr case=start
// [9,9,9,9,9,9,9]\n[9,9,9,9]\n
// @lcpr case=end

 */

