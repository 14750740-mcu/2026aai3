//week11-1.cpp 21. Merge Two Sorted Lists

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // ListNode*now = list1;//(2)怎麼把 Linked List 裡面的數字,都走過一次?
        // while (now != nullptr){//(2)只要 now 還有東西
        //     cout << now->val<<"";//(2)把now的內容 now->val印出來
        //     now = now=>next;// (2) Linked List 指到下一筆
        // }
        ListNode*ans = new ListNode(999);//(1)題目要吐出 ListNode* 我們就宣告它
        ListNode*now = ans;
        while(list1 != nullptr || list2 != nullptr){
            if (list1==nullptr){
                now->next=list2;
                break;
            }else if (list2==nullptr){
                now->next=list1;
                break;
            }else{
                if(list1->val < list2->val){
                    now->next=new ListNode(list1->val);
                    now=now->next;
                    list1=list1->next;
                }else{
                    now->next=new ListNode(list2->val);
                    now=now->next;
                    list2=list2->next;
                }
            }
        }
        return ans->next;
    }
};
