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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *breakk = list1;
        int count = 0;
        while(count != (a - 1)){
            breakk = breakk->next;
            count++;
        }

        ListNode *join = list1;
        count = 0;
        while(count != b + 1){
            join = join->next;
            count++;
        }

        ListNode *tail = list2;
        while(tail->next != NULL){
            tail = tail->next;
        }

        breakk->next = list2;
        tail->next = join;
        return list1;
    }
};