#include <list>
#include<iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode bList(0);
            ListNode *res = &bList;
            int aux = 0;
    
            while(l1 != nullptr || l2 != nullptr || aux != 0){
                int value1 = (l1 != nullptr) ? l1->val : 0;
                int value2 = (l2 != nullptr) ? l2->val : 0;
    
                int sum = value1 + value2 + aux;
                aux = sum/10;
    
                res->next = new ListNode(sum%10);
                res = res->next;
    
                if(l1 != nullptr) l1 = l1->next;
                if(l2 != nullptr) l2 = l2->next;
            }
            
            return bList.next;
        }
    };

// Função auxiliar para criar lista a partir de vetor
ListNode* createList(const vector<int>& vals) {
    ListNode dummy;
    ListNode* current = &dummy;
    for (int val : vals) {
        current->next = new ListNode(val);
        current = current->next;
    }
    return dummy.next;
}

// Função auxiliar para imprimir lista ligada
void printList(ListNode* head) {
    cout << "[";
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << ", ";
        head = head->next;
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;

    // Criar as listas: [2, 4, 3] e [5, 6, 4] representam os números 342 + 465
    ListNode* l1 = createList({2, 4, 3});
    ListNode* l2 = createList({5, 6, 4});

    ListNode* result = solution.addTwoNumbers(l1, l2);

    printList(result); // Esperado: [7, 0, 8]

    return 0;
}