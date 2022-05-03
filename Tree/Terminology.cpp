/*
Height of tree starts from 1 . from Root.
Level Of tree start from level 0 - from Root.
n nodes-> n-1 edges
Level of tree= height+1
Binary tree is tree with each node either of degree 0 or 1 or 2.
n- ary means that the maximum degree of any node with not exceed n.


1)  Number of binary tree with n nodes

--->unlabbeled nodes
             Catalon Number->  2nCn/(n+1);

--->labelled nodes
             Catalon Number * n!
             2nCn/(n+1) * n!

2)  Number of trees with maximum height in all forms;

   n->nodes
   H max value = n - 1;
   number of trees with H max = 2^(n-1)


3)Minimum nodes to get a tree of height h
=> height+1 = nodes;

  Maximum nodes to get a tree of height h
=> 2^(h+1)-1

4)Minimum height tree with nodes n;

 H min= log2(n+1)-1

  Maximum height tree with nodes n
 H max= n-1;

5) HEIGHT OF BINARY TREE VARIES FROM

 LOG2(N+1)-1 <= H  <= N-1

6) Number of nodes with height h
  h+1 <= n <= 2^(h+1)-1

7)deg(0) = deg(2)+1 

8)
Strict binary tree
-->Only with deg(0) and deg(2) Nodes.
-->No node with deg(1)

9) Analysis of n-ary  //Strict//  trees
 --> if h given
       min nodes =  n * h+1;
       max nodes = m ( h + 1 ) - 1 / (m - 1)

 --> e= ( m - 1 )* i + 1;

*/