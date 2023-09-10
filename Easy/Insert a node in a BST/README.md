<h2><a href="https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1">Insert a node in a BST</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a <strong>BST</strong> and a key <strong>K</strong>. If K is not present in the BST, Insert a new Node with a value equal to K into the BST. If K is already present in the BST, don't modify the BST.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp;2
&nbsp;  /&nbsp;&nbsp; \ &nbsp; 1&nbsp;  &nbsp; 3
K = 4
<strong>Output: <br></strong>1 2 3 4<strong>
Explanation: <br></strong>After inserting the node 4
Inorder traversal will be 1 2 3 4.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;2
&nbsp; &nbsp; &nbsp;&nbsp;/&nbsp;&nbsp; \
 &nbsp; &nbsp; 1 &nbsp; &nbsp; 3
 &nbsp;  &nbsp; &nbsp; &nbsp;   &nbsp;\
 &nbsp;  &nbsp;&nbsp; &nbsp; &nbsp;   &nbsp;6
K = 4
<strong>Output: <br></strong>1 2 3 4 6<strong>
Explanation: <br></strong>After inserting the node 4
Inorder traversal of the above tree will be 1 2 3 4 6.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>insert()</strong>&nbsp;which takes the root of the BST and Key K as input parameters&nbsp;and returns the root of the modified BST after inserting K.&nbsp;<br><strong>Note: </strong>The generated output contains the inorder traversal of the modified tree.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(Height of the BST).<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(Height of the BST).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= Number of nodes initially in BST &lt;= 10<sup>5</sup></span><br><span style="font-size: 18px;">1 &lt;= K &lt;= 10<sup>9</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Samsung</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Design-Pattern</code>&nbsp;<code>Data Structures</code>&nbsp;