class Solution {
	public:
	vector<int> boundaryTraversal(vector<vector<int>> & mat) {
		// code here
		vector<int> ans;
		int n = mat.size();
		int m = mat[0].size();
		int top = 0;
		int down = n - 1;
		int left = 0;
		int right = m - 1;
		int d = 0;
		 while(d<=3&&down>=0&&top<n&&right>=0&&left<m) {
			if (d == 0) {
				for (int i = left; i <= right; i++)
					ans.push_back(mat[top][i]);
				//	System.out.println
				top++;
			}
			else if (d == 1) {
				for (int i = top; i <= down; i++)
					ans.push_back(mat[i][right]);
				right--;
			}
			else if (d == 2) {
				for (int i = right; i >= left; i--)
					ans.push_back(mat[down][i]);
				down--;
			}
			else {
				for (int i = down; i >= top; i--)
					ans.push_back(mat[i][left]);
					
				left++;
			}
			d = (d + 1) ;

		}
		return ans;
	}
};
