# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head

        curr = head
        new_next = curr.next
        curr.next = None

        while new_next:
            temp = new_next
            new_next = new_next.next
            temp.next = curr
            curr = temp

        return curr

    




