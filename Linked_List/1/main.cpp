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

#include<stack>
#include<iostream>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head == nullptr)
        {
            return nullptr;
        }
        
        stack<int> s;
        
        ListNode* current = head;
        while(current != nullptr)
        {
            s.push(current->val);
            cout << current->val << endl;
            current = current->next;
        }
        
        int top = s.top();
        s.pop();
        ListNode* reversedList = new ListNode(top);
        current = reversedList;
        while(!s.empty())
        {
            top = s.top();
            s.pop();
            current->next = new ListNode(top);
            current = current->next;
        }
        return reversedList;
        
    }
};