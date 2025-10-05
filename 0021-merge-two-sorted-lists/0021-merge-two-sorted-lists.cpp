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
    void traverse(ListNode *head, vector<int> &nums){
        ListNode *temp = head;
        while(temp != NULL){
            nums.push_back(temp->val);
            temp = temp->next;
        }

        return;
    }

    void insertAtTail(ListNode *&head, ListNode *&tail, int x){
        ListNode *newNode = new ListNode(x);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> nums;
        traverse(list1, nums);
        traverse(list2, nums);
        // now i will construct the linked list.
        ListNode *head = NULL;
        ListNode *tail = NULL;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            insertAtTail(head, tail, nums[i]);
        }

        return head;
    }
};