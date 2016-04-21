vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  vector<int> dups;
  int i = 0, j = 0;
  int n = A.size(), m = B.size();
  while(i<n && j<m){
    if(A[i] == B[j]){
      dups.push_back(A[i]);
      i++;
      j++;
    }
    else if (A[i]>B[j])   j++;
    else
      i++;
  }
  return dups;
}
