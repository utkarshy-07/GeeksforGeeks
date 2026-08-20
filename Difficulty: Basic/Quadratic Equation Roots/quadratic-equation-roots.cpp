class Solution {
	public:
	vector<int> quadraticRoots(int a, int b, int c) {
		// code here
		vector<int> roots;
		
		int d = b * b - 4 * a * c;
		
		if (d < 0) {
			roots.push_back(-1);
			return roots; 
		}
		
		
		double sqrtd = sqrt(d);
		int r1 = floor((-b + sqrtd) / (2.0 * a));
		int r2 = floor((-b - sqrtd) / (2.0 * a));
		
		roots.push_back(max(r1, r2));
		roots.push_back(min(r1, r2));
		
		return roots;
	}
};
