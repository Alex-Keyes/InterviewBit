int Solution::sqrt(int A) {
    //base cases
    if(A == 0 || A == 1)
        return A;
    
    //algo
    long long start = 1, end = A, ans;
    while(start <= end){
        long long mid = (start + end) >> 1;
        
        //case 1: if perfect square
        if(mid * mid == A)
            return (int)mid;
        //case 2: increment right
        if(mid * mid < A){
            start = mid + 1;
            ans = mid;
        }
        //case 3: increment left
        else 
            end = mid - 1;
    }
    return (int)ans;
}

