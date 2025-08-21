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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int size = 0;
        ListNode* dummy = head;
        ListNode* ans = head;

        while(dummy){
            dummy = dummy->next;
            size++;
        }

        int removeHead = size - n + 1;
        int cont = 2;

        dummy = head->next;

        if(!dummy){
            return nullptr;
        }

        if(removeHead == 1){
            head = dummy;
            return head;
        }

        while(head){
            if(cont == removeHead){
                head->next = dummy->next;
            }

            head = head->next;
            dummy = dummy->next;
            cont++;
        }

        return ans;
    }
};
