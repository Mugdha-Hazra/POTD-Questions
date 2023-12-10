<h2><a href="https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1">Subarray with 0 sum</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array of integers. Find if there is a <strong>subarray </strong>(of size at-least one) with <strong>0 sum</strong>. You just need to return true/false&nbsp;</span><span style="font-size: 18px;">depending upon whether there is a subarray present with 0-sum or not. Printing will be taken care by the driver code.</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong>
<span style="font-size: 18px;">n = 5
arr = {4,2,-3,1,6}
<strong>Output: 
</strong>Yes<strong>
Explanation: 
</strong>2, -3, 1 is the subarray with sum 0.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><strong><span style="font-size: 18px;">Input:</span></strong>
<span style="font-size: 18px;">n = 5
arr = {4,2,0,1,6}
<strong>Output:</strong> 
Yes
<strong>Explanation:</strong> 
0 is one of the element in the array so there exist a subarray with sum 0.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You only need to complete the function <strong>subArrayExists()&nbsp;</strong>that takes<strong> array </strong>and<strong> n</strong> as <strong>parameters </strong>and <strong>returns </strong>true or false.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(n).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(n).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n&nbsp;&lt;= 10<sup>4</sup><br>-10<sup>5</sup> &lt;= a[i] &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Hash</code>&nbsp;<code>Map</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;