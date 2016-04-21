class Solution {
    public:
        // returns the index.
        int findMin(const vector<int> &A, int start, int end) {
            if (start > end) return -1;
            if (start == end) {
                return start;
            }
            int mid = (start + end) / 2;
            if (A[mid] < A[end]) {
                return findMin(A, start, mid);
            } else if (A[mid] > A[end]) {
                return findMin(A, mid + 1, end);
            } else {
                // should not come here 
                int index1 = findMin(A,start, mid);
                int index2 = findMin(A, mid + 1, end);
                if (index1 != -1 && index2 != -1) {
                    if (A[index1] < A[index2]) return index1;
                    return index2;
                } else if (index1 != -1) return index1;
                else return index2;
            }
        }

        int binarySearch(const vector<int> &A, int start, int end, int target) {
            if (start > end) return -1; 
            if (start == end) {
                if (A[start] == target)
                    return start;
                return -1;
            }
            int mid = (start + end) / 2;
            if (A[mid] < target) {
                return binarySearch(A, mid + 1, end, target);
            } else return binarySearch(A, start, mid, target);
        }

        int search(const vector<int> &A, int target) {
            int n = A.size();
            int index = findMin(A, 0, n - 1);
            int index1 = binarySearch(A, 0, index, target); 
            if (index1 != -1) return index1;
            return binarySearch(A, index, n - 1, target);
        }
};
