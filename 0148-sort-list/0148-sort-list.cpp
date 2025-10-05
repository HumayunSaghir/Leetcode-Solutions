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
    ListNode *findMid(ListNode *head){
        ListNode *slow = head;
        ListNode *fast = head->next;

        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    
    }

    ListNode *merge(ListNode *left, ListNode *right){
        if(left == NULL){
            return right;
        }

        if(right == NULL){
            return left;
        }

        ListNode *ansHead = new ListNode(10);
        ListNode *temp = ansHead;
        while(left != NULL && right != NULL){
            if(left->val <= right->val){
                temp->next = left;
                temp = left;
                left = left->next;
            }
            else{
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }

        while(left != NULL){
            temp->next = left;
            temp = left;
            left = left->next;
        }

        while(right != NULL){
            temp->next = right;
            temp = right;
            right = right->next;
        }
        
        ListNode *remove  = ansHead;
        ansHead = ansHead->next;
        remove->next = NULL;
        return ansHead;
        
    }

    ListNode *mergeSort(ListNode *head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode *middle = findMid(head);
        ListNode *left = head;
        ListNode *right = middle->next;
        middle->next = NULL;

        left = mergeSort(left);
        right = mergeSort(right);

        ListNode *result = merge(left, right);

        return result;

    }

    ListNode* sortList(ListNode* head) {
        head = mergeSort(head);
        return head;
    }
};