
struct ListNode* mergeTwo(struct ListNode* a, struct ListNode* b) {

    struct ListNode dummy;
        struct ListNode* tail = &dummy;

            dummy.next = NULL;

                while (a != NULL && b != NULL) {

                        if (a->val <= b->val) {
                                    tail->next = a;
                                                a = a->next;
                                                        }
                                                                else {
                                                                            tail->next = b;
                                                                                        b = b->next;
                                                                                                }

                                                                                                        tail = tail->next;
                                                                                                            }

                                                                                                                tail->next = (a != NULL) ? a : b;

                                                                                                                    return dummy.next;
                                                                                                                    }

                                                                                                                    struct ListNode* mergeLists(struct ListNode** lists,
                                                                                                                                                int left, int right) {

                                                                                                                                                    if (left > right)
                                                                                                                                                            return NULL;

                                                                                                                                                                if (left == right)
                                                                                                                                                                        return lists[left];

                                                                                                                                                                            int mid = left + (right - left) / 2;

                                                                                                                                                                                struct ListNode* l1 = mergeLists(lists, left, mid);
                                                                                                                                                                                    struct ListNode* l2 = mergeLists(lists, mid + 1, right);

                                                                                                                                                                                        return mergeTwo(l1, l2);
                                                                                                                                                                                        }

                                                                                                                                                                                        struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {

                                                                                                                                                                                            if (listsSize == 0)
                                                                                                                                                                                                    return NULL;

                                                                                                                                                                                                        return mergeLists(lists, 0, listsSize - 1);
                                                                                                                                                                                                        }
                                                                                                                                                                                                        