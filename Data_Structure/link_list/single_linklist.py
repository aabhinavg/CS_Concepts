class Node:
    def __init__(self, data):
        self.item = data
        self.ref = None

class LinkedList:
	def __init__(self):
		self.start_node = None
	def make_new_list(self):
        	nums = int(input("How many nodes do you want to create: "))
        	if nums == 0:
            		return
        	for i in range(nums):
           		 value = int(input("Enter the value for the node:"))
            		 self.insert_at_start(value)
	def insert_at_start(self, data):
		new_node = Node(data);
		new_node.ref = self.start_node
		self.start_node= new_node

	def traverse_list(self):
		if self.start_node is None:
			print("List has no element")
			return
		else:
			n=self.start_node
			while n is not None:
				print n.item," "
				n =n.ref

new_linked_list = LinkedList()
new_linked_list.make_new_list()
new_linked_list.traverse_list()



