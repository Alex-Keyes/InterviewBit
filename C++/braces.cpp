int braces(string str)
{
  stack<char> Stack;

  for(int i = 0; i < str.size(); ++i) {
    if(str[i] == ')') {
      int count = 0;
      while(Stack.top() != '(') {
        Stack.pop();
        count++;
      }
      Stack.pop();
      if(count < 2)
        return 1;
    } else {
      Stack.push(str[i]);
    }
  }

  bool redundant = true;

  while(Stack.size()) {
    if(Stack.top() == '(' || Stack.top() == ')') {
      redundant = false;
      break;
    }
    Stack.pop();
  }

  if(!redundant)
    return 1;
  return 0;
}
};
