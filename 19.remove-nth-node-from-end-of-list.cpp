/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // まずはlistのノード数を算出する
        int size = 0;
        for (ListNode* node = head; node != nullptr; node = node->next) size++;

        if (size == 1) return nullptr;

        // 削除するノードの一つ前の位置を算出
        int target = size - n;

        int index = 1;
        if (target == 0) {
            head = head->next;
            return head;
        }
        for (ListNode* node = head; node != nullptr; node = node->next) {
            if (index == target) {
                node->next = node->next->next;
            }
            index++;
        }
        return head;
    }
    
};
// @lc code=end

