/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        vector<int> list;

        // ノードが0個の場合
        if (head == nullptr) return nullptr;

        while (head) {
            list.push_back(head->val);
            head = head->next;
        }

        // 新しいノードの作成
        ListNode* node = new ListNode(list[list.size() - 1]);

        // ノードの先頭を保持
        ListNode* head_node = node;

        for (int i = list.size() - 2; i >= 0; i--) {
            ListNode* current_node = new ListNode(list[i]);

            // ノードの最後に新しいノードを追加
            while (node) {
                if (node->next == nullptr) {
                    node->next = current_node;
                    break;
                } else {
                    node = node->next;
                }
            }
        }

        return head_node;
    }
};
// @lc code=end

