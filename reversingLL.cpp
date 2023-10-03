#include<bits/stdc++.h>
using namespace std;


Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        int count = 0;
        if(head == NULL) return NULL;
        ListNode* current = head;
        ListNode* prev = NULL; 
        ListNode* next = NULL;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }
};

int main(){
    // create an object and call the functions
    return 0;
}