//week12-2.cpp 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(999);// 工具1
        ListNode* now=ans;//一個會移動的指標
        int carry=0;//進位的英文,叫 carry
        while (l1 != nullptr || l2 != nullptr){
            if (l1 != nullptr) carry += l1->val;
            if (l2 != nullptr) carry += l2->val;
            now->next=new ListNode(carry%10);
            now=now->next;
            carry = carry/10;//超過10的進位的部分
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        if (carry) now->next = new ListNode(carry);
        return ans->next;
    }
};
