#include <bits/stdc++.h>
using namespace std;

int len(vector<int>& nums)
{

	int n = nums.size();
	vector<int> ans;
	ans.push_back(nums[0]);

	for (int i = 1; i < n; i++) {
		if (nums[i] > ans.back()) {
			ans.push_back(nums[i]);
		}
		else {
			int low = lower_bound(ans.begin(), ans.end(),
								nums[i])
					- ans.begin();
			ans[low] = nums[i];
		}
	}
	return ans.size();
}

int mod(int A, int M)
{
    int m0 = M;
    int y = 0, x = 1;
    if (M == 1)
        return 0;
    while (A > 1) {
        int q = A / M;
        int t = M;
        M = A % M, A = t;
        t = y;
        y = x - q * y;
        x = t;
    }
 
    if (x < 0)
        x += m0;
 
    return x;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int l = len(arr);
    int p = mod(l,1e6+7);
    cout<<p<<endl;
	return 0;
}
