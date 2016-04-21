// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &x, vector<int> &y) {
  if (x.size() <= 1) return 0;
  assert(x.size() == y.size());
  int ans = 0;
  for (int i = 1; i < x.size(); i++) {
    ans += max(abs(x[i] - x[i-1]), abs(y[i] - y[i-1]));
  }
  return ans;
        }
