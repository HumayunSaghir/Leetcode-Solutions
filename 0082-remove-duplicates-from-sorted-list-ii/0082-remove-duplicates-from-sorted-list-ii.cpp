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
    void insertAtTail(ListNode *&head, ListNode *&tail, int value){
        ListNode *newNode = new ListNode(value);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    bool check(vector<int> nums, int key){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == key){
                return true;
            }
        } 

        return false;
    }

    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        ListNode *head2 = NULL;
        ListNode *tail2 = NULL;
        ListNode *curr = head;
        vector<int> nums;
        while(curr != NULL){
            ListNode *temp = curr->next;
            while(temp != NULL){
                if(temp->val == curr->val){
                    nums.push_back(curr->val);
                    break;
                }
                else{
                    temp = temp->next;
                }
            }
            curr = curr->next;
        }
        curr = head;
        while(curr != NULL){
            if(check(nums, curr->val) == false){
                insertAtTail(head2, tail2, curr->val);
            }
            curr = curr->next;
        }

        head = head2;
        return head;

    }
};