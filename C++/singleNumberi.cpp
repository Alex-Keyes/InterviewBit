int Solution::singleNumber(const vector<int> &A) {
  // Do not write main() function.
  // Do not read input, instead use the arguments to the function.
  // Do not print the output, instead return values as specified
  // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  return accumulate(A.cbegin(), A.cend(),
                    0, std::bit_xor<int>());
}
