/// week13-3.cpp 學習計畫 Linked List 第 3 題
/// LeetCode 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans; /// 幫忙把 ans 的尾巴接好
        int carry = 0;
        while( l1 != nullptr || l2 != nullptr ){
            int now = carry; /// 有沒有進位啊 !!!!
            if(l1 != nullptr){ /// 如果還有質
                now += l1->val; /// 把值加進去
                l1 = l1->next; /// 換下一筆
            }
            if(l2 != nullptr){
                now += l2->val; /// 把值加進去
                l2 = l2->next; /// 換下一筆
            }
            ans2->next = new ListNode( now%10 ); /// 個位數, 準備一個 node
            ans2 = ans2->next; /// 換下一筆
            carry = now/10; /// 進位的部分
        }
        /// 還沒收尾, 先看一下結果
        if(carry>0) ans2->next = new ListNode( carry ); /// 還有進位? 加 1 位!
        return ans->next;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 **/
