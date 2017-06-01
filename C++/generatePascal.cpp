vector <vector<int>> Solution::generate(int A) {
    vector <vector<int>> ans;
    if (A <= 0) {
        return ans;
    }
    vector<int> temp;
    temp.push_back(1);
    ans.push_back(temp);

    for (int r = 0; r < A - 1; r++) {

        vector<int> newRow;
        newRow.push_back(1);

        for (int c = 0; c < ans[r].size() - 1; c++) {
            newRow.push_back(ans[r][c] + ans[r][c + 1]);
        }

        newRow.push_back(1);
        ans.push_back(newRow);

    }
    return ans;
}

