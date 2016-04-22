class MinStack {
private:
  stack<int> elementStack;
  stack<int> minimumStack;
  int minElement = -1;
public:
  void push(int x) {
    elementStack.push(x);
    if(elementStack.size() == 1 || x <= minElement) {
      minimumStack.push(x);
      minElement = x;
    } 
  }

  void pop() {
    if (elementStack.top() == minElement) {
      minimumStack.pop();
      if (!minimumStack.empty()) {
        minElement = minimumStack.top();
      } else {
        minElement = -1;
      }
    }
    elementStack.pop();
  }

  int top() {
    if (elementStack.empty()) return -1;
    return elementStack.top();
  }

  int getMin() {
    return minElement;
  }
};
