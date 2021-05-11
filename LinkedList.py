# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
class Node():
    
    def __init__(self, v, n=None):
        self.val = v
        self.nex = n

def ListToNodes(lis):
    if(len(lis)==1):
        return Node(lis[0])
    return Node(lis[0], ListToNodes(lis[1:]))

def NodesToList(head):
    r = [head.val]
    while head.nex != None:
        r.append(head.nex.val)
        head = head.nex
    return r
print(NodesToList(ListToNodes([0,1,2,5,3])))
