<h2><a href="https://practice.geeksforgeeks.org/problems/cutting-binary-string1342/1">Cutting Binary String</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string <strong>s</strong> containing 0's and 1's. You have to return the smallest positive integer <strong>C</strong>, such that the binary string can be cut into <strong>C</strong> pieces and each piece should be of the <strong>power of 5&nbsp;</strong> with no leading zeros.<br><strong>Note:&nbsp;</strong>The string <strong>s&nbsp;</strong>is a binary string. And if no such cuts are possible, then return -1.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
s = "101101101"<strong>
Output: 
</strong>3
<strong>Explanation: 
</strong>We can split the given string into 
three 101s, where 101 is the binary 
representation of 5.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:
</strong>s = "00000"
<strong>Output: 
</strong>-1
<strong>Explanation: 
</strong>0 is not a power of 5.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>Your task is to complete the function&nbsp;<strong>cuts()&nbsp;</strong>which take a single argument(string s). You need not take any input or print anything. Return an <strong>int C</strong> if the&nbsp;<strong>cut&nbsp;</strong>is possible else return -1.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(|s|*|s|*|s|).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(|s|).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1&lt;= |s| &lt;=50</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Walmart</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Bit Magic</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;