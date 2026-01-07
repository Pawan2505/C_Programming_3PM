📝 This question explains:

Relationship between nodes and pointers

Dynamic creation of nodes

Answer:
In a singly linked list, each node contains exactly one pointer (next).
So, for N nodes, there are N pointers.

Process:

Create a node using dynamic memory (new)

Store data in the node

next pointer stores the address of the next node

Last node’s next pointer stores NULL

This way, N nodes are connected using N pointers, forming a singly linked list.