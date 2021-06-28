//
// Created by Ibrahim Kamal on 6/26/21.
//

#ifndef CLION_LINKEDLIST_HELPER_H
#define CLION_LINKEDLIST_HELPER_H

#endif //CLION_LINKEDLIST_HELPER_H
static class LINKEDLIST_HELPER{
public:
    struct ListNode {
        int val;
        ListNode *next;

        ListNode() : val(0), next(nullptr) {}

        ListNode(int x) : val(x), next(nullptr) {}

        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    void Print() {
        ListNode *head = new ListNode();
        head->val = this->val;
        head->next = this->next;
        while (head) {
            cout << head->val << " ";
            head = head->next;
        }
    }

    void CreateLinkedList(vector<int> l) {
        this->val = l[0];
        ListNode *ptr = this;
        for (int i = 1; i < l.size(); ++i) {
            ptr->next = new ListNode(l[i]);
            ptr = ptr->next;
        }
    }

};