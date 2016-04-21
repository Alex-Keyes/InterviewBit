class Solution {
public:
  int maxArea(vector<int> &height) {
    int end = height.size() - 1, start = 0;
    int maxVol = 0;

    while(start < end)
      {
        maxVol = max(maxVol, (end - start) * min(height[start], height[end]));

        if (height[start] < height[end]) {
          start++;
        } else {
          end--;
        }
      }
    return maxVol;
  }
};
Close
