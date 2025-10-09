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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> result;
        // Single node case!
        if(head->next == NULL){
            result.push_back(0);
            return result;
        }

        ListNode *curr = head;
        while(curr != NULL){
            ListNode *temp = curr->next;
            if(curr->next == NULL){
                result.push_back(0);
                break;
            }
            bool valueFound = false;
            while(temp != NULL){
                if(temp->val > curr->val){
                    result.push_back(temp->val);
                    curr = curr->next;
                    valueFound = true;
                    temp = NULL;
                    break;
                }
                else{
                    temp = temp->next;
                    if(temp == NULL){
                        result.push_back(0);
                    }
                }
            }
            if(valueFound == false){
                curr = curr->next;
            }
        }
        return result;
    }
};