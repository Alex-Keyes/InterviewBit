int findCount(const vector<int> &A, int target) {
  int n = A.size();
  int i = 0, j = n - 1;
  int start = -1, end = -1;

  // FIND FIRST
  while (i < j)
    {
      int mid = (i + j) /2;
      if (A[mid] < target) i = mid + 1;
      else j = mid;
    }
  if (A[i] != target) return 0; // the element does not exist in the array.

  start = i;

  // FINDLAST
  j = n - 1;  // We don't have to set i to 0 the second time.
  while (i < j)
    {
      int mid = (i + j) /2 + 1;   // Make mid biased to the right
      if (A[mid] > target) j = mid - 1;  
      else i = mid;               // So that this won't make the search range stuck.
    }
  end = j;
  return (end - start + 1); 
}
