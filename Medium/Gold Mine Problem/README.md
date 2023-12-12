<h2><a href="https://www.geeksforgeeks.org/problems/gold-mine-problem2608/1">Gold Mine Problem</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a gold mine called&nbsp;<strong>M</strong>&nbsp;of <strong>(n x&nbsp;m)</strong> dimensions. Each field in this mine contains a <strong>positive integer </strong>which is the amount of gold in tons. Initially the miner can start from any row in the first column. From&nbsp;a given cell, the miner can move </span></p>
<ol>
<li><span style="font-size: 18px;">to the cell diagonally up towards the right&nbsp;</span></li>
<li><span style="font-size: 18px;">to the right</span></li>
<li><span style="font-size: 18px;">to the cell&nbsp;diagonally down towards the right</span></li>
</ol>
<p><span style="font-size: 18px;">Find out <strong>maximum amount of gold </strong>which he can collect until he can no longer move.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> n = 3, m = 3
M = {{1, 3, 3},
     {2, 1, 4},
     {0, 6, 4}};
<strong>Output:</strong> 12
<strong>Explaination:</strong> 
The path is {(1,0) -&gt; (2,1) -&gt; (2,2)}.</span></pre>
<p><br><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> n = 4, m = 4
M = {{1, 3, 1, 5},
     {2, 2, 4, 1},
     {5, 0, 2, 3},
     {0, 6, 1, 2}};
<strong>Output:</strong> 16
<strong>Explaination:</strong> 
The path is {(2,0) -&gt; (3,1) -&gt; (2,2) 
-&gt; (2,3)} or {(2,0) -&gt; (1,1) -&gt; (1,2) 
-&gt; (0,3)}.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You do not need to read input or print anything. Your task is to complete the function <strong>maxGold()</strong> which takes the values <strong>n</strong>, <strong>m</strong> and the mine represented as a <strong>2D array </strong>of positive integeres <strong>M</strong> as input parameters and returns the <strong>maximum amount of gold </strong>that can be collected.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n*m)<br><strong>Expected Auxiliary Space:</strong> O(n*m)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n, m ≤ 500<br></span><span style="font-size: 18px;">0 ≤ M[i][j] ≤ 100</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Samsung</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;