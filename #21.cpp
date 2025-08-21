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
        ListNode* ans = new ListNode();
        ListNode* dummy = ans;

        while(list1 || list2){

            if(!list1){
                ListNode* aux = new ListNode(list2->val);
                ans->next = aux;
                list2 = list2->next;
            } else if(!list2){
                ListNode* aux = new ListNode(list1->val);
                ans->next = aux;
                list1 = list1->next;
            } else {
                if(list1->val <= list2->val){
                    ListNode* aux = new ListNode(list1->val);
                    ans->next = aux;
                    list1 = list1->next;
                } else {
                    ListNode* aux = new ListNode(list2->val);
                    ans->next = aux;
                    list2 = list2->next;
                }
            }

            ans = ans->next;
        }

        ans = dummy->next;
        return ans;
    }
};