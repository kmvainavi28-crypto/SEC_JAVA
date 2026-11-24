
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

    struct ListNode dummy;
        dummy.next = head;

            struct ListNode* fast = &dummy;
                struct ListNode* slow = &dummy;

                    // Move fast pointer n steps ahead
                        for (int i = 0; i < n; i++) {
                                fast = fast->next;
                                    }

                                        // Move both pointers until fast reaches last node
                                            while (fast->next != NULL) {
                                                    fast = fast->next;
                                                            slow = slow->next;
                                                                }

                                                                    // Remove the nth node from the end
                                                                        struct ListNode* temp = slow->next;
                                                                            slow->next = temp->next;

                                                                                free(temp);

                                                                                    return dummy.next;
                                                                                    }
                                                                                    