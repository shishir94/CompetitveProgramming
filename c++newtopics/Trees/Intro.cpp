// Some terminology related to trees :-
/*
Example :: Raghav has three children namely Shruti , Rahul and Om . rahul has two children 1 and 2 , om has one child
     5 nd shruti has 2 children 10 and 10 has one child 11.


Root : Topmost node.---->  Raghav
Parent : Node which connects to the child. ---> Raghav , Rahul , Om , Shruti , 10
Child : Node which is connected by another node is its child.
Leaf Node : Also known as external node. Nodes with no children is a leaf node. -----> 11 , 5 , 1 ,2.
Internal Node : Nodes with at least one child.
Depth of a node : Number of edges from root to the node.
Height : Number of edges from node to the deepest leaf.
Siblings : Node belonging to the same parent. ---->  Rahul , om,shruti.
Ancestrors : Parents or parents of parents. ---> Ancestors of 11 are  10 , Shruti , Raghav.
Descendents : Child or child of child. ----> Descendents of Shruti are 10 and 11.
*/

// Trees are non linear data structures ----> Ideal for representing hierarchical data.
