int evalRPN(vector<string> &tokens) {
            stack<int> st;
            for(int i = 0; i < tokens.size(); ++i) {
                if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                    int v1=st.top();
                    st.pop();
                    int v2=st.top();
                    st.pop();
                    switch(tokens[i][0]) {
                        case '+':
                            st.push(v2 + v1);
                            break;
                        case '-':
                            st.push(v2 - v1);
                            break;
                        case '*':
                            st.push(v2 * v1);
                            break;
                        case '/':
                            st.push(v2 / v1);
                            break;
                    }
                } else {
                    st.push(atoi(tokens[i].c_str()));
                }
            }
            return st.top();
        }
