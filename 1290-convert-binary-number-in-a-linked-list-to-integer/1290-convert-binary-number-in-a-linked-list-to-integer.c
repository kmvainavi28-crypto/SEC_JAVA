/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int getDecimalValue(struct ListNode* head) {
    int ans = 0;
    struct ListNode* current = head;
    
    while (current != NULL) {
        // Shift the previous result left by 1 bit and add the current node's value
        ans = (ans << 1) | current->val; 
        current = current->next;
    }
    
    return ans;
}
