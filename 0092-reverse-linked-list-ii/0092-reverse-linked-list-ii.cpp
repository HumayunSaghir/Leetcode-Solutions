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
    int getLength(ListNode *head){
        int count = 0;
        ListNode *temp = head;
        
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        return count;

    }

    void reverse(ListNode *&head){
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *fwd = NULL;
        while(curr != NULL){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
    }

    ListNode* getTail(ListNode *head){
        ListNode *tail = head;
        while(tail->next != NULL){
            tail = tail->next;
        }

        return tail;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || left == right){
            return head;
        }

        // Getting length of the linked list.
        int len = getLength(head);

        // Now handling the middle case.
        if(left > 1 && right < len){
            // Taking L to left.
            ListNode *L = head;
            int count = 1;
            while(count != left){
                L = L->next;
                count++;
            }

            // Taking R to right.
            ListNode *R = head;
            count = 1;
            while(count != right){
                R = R->next;
                count++;
            }
            
            // Taking prev one before L!
            ListNode *prev = head;
            while(prev->next != L){
                prev = prev->next;
            }

            // Taking curr one after R!
            ListNode *curr = head;
            while(R->next != curr){
                curr = curr->next;
            }

            prev->next = NULL;
            R->next = NULL;
            reverse(L);

            // No join the links
            prev->next = R;
            L->next = curr;
        }

        else if(left == 1 && right == len){
            ListNode *tail = getTail(head);
            reverse(head);
            head = tail;
        }        
    
        else if(left == 1 && right < len){
            // Taking L to left.
            ListNode *L = head;
            int count = 1;
            while(count != left){
                L = L->next;
                count++;
            }

            // Taking R to right.
            ListNode *R = head;
            count = 1;
            while(count != right){
                R = R->next;
                count++;
            }

            ListNode *head1 = R;

            // Taking curr one after R!
            ListNode *curr = head;
            while(R->next != curr){
                curr = curr->next;
            }

            R->next = NULL;

            reverse(L);
            L->next = curr;
            head = head1;
        }

        else if(left > 1 && right == len){
            // Taking L to left.
            ListNode *L = head;
            int count = 1;
            while(count != left){
                L = L->next;
                count++;
            }

            // Taking R to right.
            ListNode *R = head;
            count = 1;
            while(count != right){
                R = R->next;
                count++;
            }

            ListNode *temp =  head;
            while(temp->next != L){
                temp = temp->next;
            }
            temp->next = NULL;

            reverse(L);

            temp->next = R;
            
        }

        return head;
    
    }
};