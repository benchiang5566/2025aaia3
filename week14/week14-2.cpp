/// week14-2.cpp 學習計畫 Linked List 第2題
/// 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if( head==nullptr || head->next==nullptr ) return head; /// 設定終止條件

        /// 5 行搞定「函式呼叫函式」
        ListNode* ans = reverseList( head->next );
        head->next->next = head; /// 現在的下一筆、的下一筆, 要指向自己
        head->next=nullptr; /// 收尾
        return ans;
    }
};
