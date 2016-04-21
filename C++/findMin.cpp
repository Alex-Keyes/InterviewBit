int Solution::findMin(const vector<int> &A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  int len = A.size(),low = 0, high = len-1;
    
  while(low <= high){
    if(A[low] <= A[high]) return A[low]; //case 1
    int mid = (low + high)/2;
    int next = (mid+1)%len, prev = (mid+len-1)%len;
    if(A[mid] <= A[next] && A[mid] <= A[prev]) //case 2
      return A[mid];
    else if (A[mid] <= A[high]) //case 3
      high = mid - 1;
    else if (A[mid] >= A[low]) //case 4
      low = mid + 1;
  }
  return -1;
}



