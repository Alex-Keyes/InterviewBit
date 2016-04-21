class Solution {
public:
  void sortColors(int A[], int n)  {     
    int n = A.size(); 
    int k = n - 1;
    int i = 0;
    for (; i < n; ++i)
      {
        if (A[i] != 0)
          {
            break;
          }
      }

    int j = i;
    for (; i <= k; ++i)
      {
        if (A[i] == 0)
          {
            swap(A[j++], A[i]);
          }
        else if (A[i] == 2)
          {
            swap(A[i--], A[k--]);
          }
      }
  }
};
