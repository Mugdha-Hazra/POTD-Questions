<h2><a href="https://www.geeksforgeeks.org/problems/painting-the-fence3727/1">Painting the Fence</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a fence with <strong>n </strong>posts and <strong>k</strong> colors, find out the number of ways of painting the fence so that <strong>not more than two </strong>consecutive posts have the same colors</span><span style="font-size: 18px;">. Since the answer can be large return it<strong> modulo 10<sup>9</sup> + 7.</strong></span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 3<br>k = 2 
<strong>Output:</strong> 6
<strong>Explanation</strong>: 
We have following possible combinations:
</span><span style="font-size: 18px;"><a href="http://cdncontribute.geeksforgeeks.org/wp-content/uploads/paintFence.png"><img style="height: 358px; margin-left: 200px; margin-right: 200px; width: 221px;" src="http://cdncontribute.geeksforgeeks.org/wp-content/uploads/paintFence.png" alt=""></a></span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>n = 2<br>k = 4 
<strong>Output:</strong> 16
<strong>Explanation</strong>: <br></span><span style="font-size: 14pt;">After coloring first post with<br>4 possible combinations, you can still color</span><br><span style="font-size: 14pt;">next posts with all 4 colors. Total possible </span><br><span style="font-size: 14pt;">combinations will be 4x4=16</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Since, this is a function problem. You don't need to take any input or print anything, as it is already accomplished by the driver code. You just need to complete the function <strong>countWays</strong>() that takes <strong>n and k</strong> as parameters and returns the number of ways in which the fence can be painted <strong>(modulo 10<sup>9</sup> + 7)</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(N).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10<sup>5</sup><br>1 ≤ K&nbsp;≤&nbsp;10<sup>5</sup><br></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;