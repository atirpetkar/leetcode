
# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

    def __cmp__(self, other):
        return self.val < other.val


from queue import PriorityQueue

class Solution(object):
    def mergeKLists(self, lists):
        dummy = ListNode(None)
        curr = dummy
        q = PriorityQueue()
        for node in lists:
            if node: q.put((node.val,node))
        while q.qsize()>0:
            curr.next = q.get()[1]
            curr=curr.next
            if curr.next: q.put((curr.next.val, curr.next))
        return dummy.next


s = Solution()
output = s.mergeKLists([[3,2,10], [4,5,6], [7,8,9]])
print(output.next.next.val)


