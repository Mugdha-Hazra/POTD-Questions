class Solution {
public:
    static int waysToSplitArray(vector<int>& nums) {
        const int n=nums.size();
        long long sum=accumulate(nums.begin(), nums.end(), 0LL);
        long long acc=0LL;
        int cnt=0;
        for(int i=0; i<n-1; i++){
            acc+=nums[i];
            cnt+=(2*acc>=sum);
        }
        return cnt;
    }
};

/*
The provided C++ code is solving the problem of finding how many ways we can split the array `nums` into two non-empty subarrays such that the sum of the elements in the left subarray is greater than or equal to the sum of the elements in the right subarray. Here's a detailed breakdown of the solution:

### Problem Recap:
You are given an array `nums`, and you need to count how many ways you can split the array into two parts:
- The left part includes the first `i` elements (where `1 <= i < n`), and
- The right part includes the remaining elements starting from index `i` to the end.

For each split, we want to check if the sum of the left part is **greater than or equal to** the sum of the right part.

### Approach Explanation:

1. **Calculate the total sum**: First, we compute the total sum of the array `sum`. This will be used to compute the sum of the right part of the array.

2. **Iterate and accumulate the left part sum**: We iterate through the array and maintain an accumulator (`acc`) that holds the sum of the left part. For each index `i`, the sum of the right part can be calculated as:
   \[
   \text{right\_sum} = \text{total\_sum} - \text{acc} - \text{nums}[i]
   \]
   The condition we want to check is:
   \[
   \text{acc} \geq \text{right\_sum}
   \]
   Simplifying the inequality:
   \[
   2 \times \text{acc} \geq \text{total\_sum}
   \]
   If this condition holds true, we count this index as a valid split.

3. **Counting valid splits**: For every index `i`, we check whether `2 * acc >= sum` and increment the counter `cnt` if the condition is satisfied.

### Detailed Code Explanation:

```cpp
class Solution {
public:
    static int waysToSplitArray(vector<int>& nums) {
        const int n = nums.size();  // Get the size of the input array
        long long sum = accumulate(nums.begin(), nums.end(), 0LL);  // Total sum of the array
        long long acc = 0LL;  // This will accumulate the sum of the left part of the array
        int cnt = 0;  // This will count the number of valid splits
        
        // Iterate through the array up to the second-to-last element (n-1)
        for (int i = 0; i < n - 1; i++) {
            acc += nums[i];  // Update the sum of the left part
            // Check if the condition 2 * acc >= sum is satisfied
            cnt += (2 * acc >= sum);
        }
        
        return cnt;  // Return the number of valid splits
    }
};
```

### Key Points:

1. **Total Sum Calculation**: The total sum of the array is calculated using `accumulate(nums.begin(), nums.end(), 0LL)`. This ensures that the sum is calculated correctly even if the numbers are large, as we use `0LL` (long long) to avoid overflow.

2. **Left and Right Sums**: We maintain the sum of the left part (`acc`) while iterating through the array. For each element at index `i`, the right part sum is implicitly `sum - acc - nums[i]`. By comparing `2 * acc >= sum`, we avoid explicitly calculating the right sum.

3. **Efficient Iteration**: The solution only requires a single pass through the array (`O(n)` time complexity), making it very efficient, even for large arrays.

4. **Boundary Condition**: The loop runs up to `n-1` because we are looking for non-empty left and right subarrays. We cannot split at the very last index (since the right part would be empty).

### Example Walkthrough:

Let's consider an example:

#### Example:
```cpp
vector<int> nums = {10, 4, 1, 3, 2}; 
```

- **Step 1**: Compute the total sum of the array:
  \[
  \text{sum} = 10 + 4 + 1 + 3 + 2 = 20
  \]

- **Step 2**: Iterate through the array:
  - For `i = 0`: 
    - `acc = 10` (sum of left part)
    - Right part sum = `20 - 10 - 10 = 10`
    - Check if `2 * acc >= sum`: `2 * 10 >= 20` → True, so increment `cnt` to `1`.
  - For `i = 1`: 
    - `acc = 10 + 4 = 14`
    - Right part sum = `20 - 14 - 4 = 2`
    - Check if `2 * acc >= sum`: `2 * 14 >= 20` → True, so increment `cnt` to `2`.
  - For `i = 2`: 
    - `acc = 14 + 1 = 15`
    - Right part sum = `20 - 15 - 1 = 4`
    - Check if `2 * acc >= sum`: `2 * 15 >= 20` → True, so increment `cnt` to `3`.
  - For `i = 3`: 
    - `acc = 15 + 3 = 18`
    - Right part sum = `20 - 18 - 3 = -1`
    - Check if `2 * acc >= sum`: `2 * 18 >= 20` → True, so increment `cnt` to `4`.

- **Final result**: The total count of valid splits is `4`.

### Time and Space Complexity:

- **Time Complexity**: 
  - Calculating the total sum takes O(n).
  - The loop to check each potential split takes O(n).
  - Hence, the total time complexity is O(n), where `n` is the size of the input array `nums`.

- **Space Complexity**: 
  - We only use a constant amount of extra space (a few variables for accumulation and counting), so the space complexity is O(1).

### Conclusion:

The solution efficiently computes the number of valid ways to split the array by using a simple accumulation technique and checking the condition for each possible split in a single pass through the array. This approach is optimal and works within the problem's constraints.
*/
