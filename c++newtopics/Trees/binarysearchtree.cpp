// BINARY SEARCH TREE
/*
1). It is a type of binary tree.
2). All nodes of left subtree are lesser.
3). All nodes of rigth subtree are greater.
4). Left and right subtree are also BST.
5). There are no duplicate nodes.   
Example ::  7
          /   \  -----> This not BST as this is violating 2 property.
        11     6

        7
      /   \      ----> This is not BST as this is violating 3 property.
     1      6

        9
       /  \    ----> This tree is BST as it satisfy all properties.
      4    11
     /  \    \
    2     7    15
         / \    /
        5   8   14

6). Inorder traversal of BST gives an ascending sorted array.
*/
