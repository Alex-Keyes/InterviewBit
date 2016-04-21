int Solution::searchInsert(vector<int> &A, int B) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  if(A.empty() || B <= A[0])
    return 0;
    
  int low = 0, hi = A.size() - 1;
    
  while(low <= hi){
    int mid = low + (hi - low) / 2;
        
    if(B == A[mid])
      return mid;    
    else if (B > A[mid])
      low = mid + 1;
    else 
      hi = mid - 1;
  }
  return low;
}
