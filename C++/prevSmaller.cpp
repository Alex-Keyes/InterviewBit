vector<int> Solution::prevSmaller(vector<int> &A) {
    //create answer vector and resize it to input vector
    vector<int> ans;
    ans.resize(A.size());

    //init stack
    stack<int> st;
    
    //start iterating through stack
    for (int i = 0; i < A.size(); i++) {
        //pop off the first element of the stack
        while (!st.empty() && st.top() >= A[i]) 
            st.pop();
        //first value answer vector will always be -1
        if (st.empty()) 
            ans[i] = -1;
        else 
            ans[i] = st.top(); //set the value of a[i] to the lowest current stack value
        
        //keep pushing elements onto the stack
        st.push(A[i]);
    }
    return ans;
}
