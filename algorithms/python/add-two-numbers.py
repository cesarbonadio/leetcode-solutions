# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

def reverse(s):
    return s[::-1]

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        
        nStr = ''
        nStr2 = ''

        while (l1!=None):
            nStr += str(l1.val)
            l1 = l1.next

        while (l2!=None):
            nStr2 += str(l2.val)
            l2 = l2.next

        
        num = int(reverse(nStr))+int(reverse(nStr2))
        numStr = str(num)
        
        list_to_return = None
        aux_node = None
        
        
        for element in numStr:
            aux_node = ListNode(int(element))
            aux_node.next = list_to_return
            list_to_return = aux_node
            aux_node = None
        
        return list_to_return