int Solution::maxSubArray(const vector<int> &A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more detai
  int max_so_far = A[0];
  int curr_max = A[0];
 
  for (int i = 1; i < A.size(); i++)
    {
      curr_max = max(A[i], curr_max+A[i]);
      max_so_far = max(max_so_far, curr_max);
    }
  return max_so_far;
}

