void swap(int& a,int &b){
	int c=a;
	a=b;
	b=c;
}

vector<int> Solution::wave(vector<int> &A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  int n = A.size();
    
  sort(A.begin(), A.begin()+n);
  for(int i = 0; i < n-1; i += 2){
    swap(A[i],A[i+1]);
  }
  return A;
}
