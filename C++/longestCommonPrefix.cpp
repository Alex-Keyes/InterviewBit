string Solution::longestCommonPrefix(vector<string> &A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  if(A.empty())
    return "";
    
  for(int i = 0; i < A[0].length(); i++){
    for(const auto &str : A){
      if(i > str.length() || str[i] != A[0][i]){
        return A[0].substr(0, i);
      }
    }
  }
}
