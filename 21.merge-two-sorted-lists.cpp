/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
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

        if (list2 == nullptr) return list1;
        if (list1 == nullptr) return list2;

        ListNode* newList = new ListNode();
        ListNode* head = newList;

        while (list1 != nullptr || list2 != nullptr) {
            ListNode* currentNode = new ListNode();
            if (list2 == nullptr || list1 != nullptr && list1->val < list2->val) {
                currentNode->val = list1->val;
                list1 = list1->next;
            } else {
                currentNode->val = list2->val;
                list2 = list2->next;
            }
            newList->next = currentNode;
            newList = newList->next;
        }

        return head->next;
    }
};
// @lc code=end

