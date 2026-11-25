// week12-4.cpp 445. Add Two Numbers II
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // 如果把 Linked List 逐一塞入陣列,就可以倒過來了啊(作弊法)
        vector<int> a; // C++伸縮自如的陣列,一開始沒有任何值
        while (head != nullptr) {
            a.push_back(head->val);
            head = head->next;
        }
        ListNode* ans = new ListNode(999);
        ListNode* now = ans;
        for (int i = a.size() - 1; i >= 0; i--) {
            now->next = new ListNode(a[i]);
            now = now->next;
        }
        return ans->next;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseList(l1);
        l2 = reverseList(l2);

        ListNode* ans = new ListNode(999); // 工具1
        ListNode* now = ans;               // 一個會移動的指標
        int carry = 0;                     // 進位的英文,叫 carry
        while (l1 != nullptr || l2 != nullptr) {
            if (l1 != nullptr)
                carry += l1->val;
            if (l2 != nullptr)
                carry += l2->val;
            now->next = new ListNode(carry % 10);
            now = now->next;
            carry = carry / 10; // 超過10的進位的部分
            if (l1 != nullptr)
                l1 = l1->next;
            if (l2 != nullptr)
                l2 = l2->next;
        }
        if (carry)
            now->next = new ListNode(carry);
        return reverseList(ans->next);
    }
};
