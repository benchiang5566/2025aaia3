/// week14-3 學習計畫 Linked List 第4題
class Solution {
public:
    ListNode* myReverse(ListNode* head){
        if(head==nullptr || head->next==nullptr) return head; /// 終至條件

        ListNode* ans = myReverse(head->next); /// 函式呼叫函式
        head->next->next = head; /// 把前面, 放到反過來的最後面
        head->next = nullptr; /// 收尾
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = myReverse(l1); /// 第一個數值, 反過來
        ListNode* list2 = myReverse(l2); /// 第二個數值, 反過來

        ListNode* ans = myAddTwoNumbers(list1, list2); /// 呼叫上週的 week13-??.cpp
        return myReverse(ans); /// 結果反過來
    }
    /// 還缺 myAddTwoNumbers() 函式 要把它寫出來
    ListNode* myAddTwoNumbers(ListNode* list1, ListNode* list2){
        ListNode* ans = new ListNode(999); /// 隨便勾勾, 答案會放在勾勾的右邊
        ListNode* ans2 = ans; /// 負責幫 ans 收尾
        int carry = 0; /// 進位
        while(list1 != nullptr || list2 != nullptr){
            int now = carry; /// 處理進位問題
            if(list1 != nullptr){
                now += list1->val; /// 加入值
                list1 = list1->next; /// 換下一筆、待命
            }
            if(list2 != nullptr){
                now += list2->val; /// 加入值
                list2 = list2->next; /// 換下一筆、待命
            }
            ans2->next = new ListNode( now%10 ); /// 記下「個位數」
            carry = now / 10; /// 進位部分
            ans2 = ans2->next; /// 換下一筆
        }
        /// 有進位問題要進行處裡
        if(carry > 0) ans2->next = new ListNode(carry); /// 進位處裡到 ans2
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
 */
