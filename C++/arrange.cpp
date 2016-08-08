void Solution::arrange(vector<int> &Vec) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int N = Vec.size();
    for(int i = 0; i < N; ++i) {
        Vec[i] = Vec[i] + (Vec[Vec[i]]%N) * N;
    }

    for(int i = 0; i < N; ++i) {
        Vec[i] = Vec[i] / N;
    }
}
