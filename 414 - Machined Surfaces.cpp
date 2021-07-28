#include<bits/stdc++.h>
using namespace std ;
int main()
{
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	while(scanf("%d", &n) == 1 && n != 0)
	{
		getchar();
		string img[n];
		int cnt[n], ans = 0;
		for (int i = 0; i < n; ++i)
		{
			getline(cin, img[i]);
			cnt[i] = count(img[i].begin(), img[i].end(), ' ');
		}
		sort(cnt, cnt + n);
		for (int i = 1; i < n; ++i)
			ans += cnt[i] - cnt[0];
		printf("%d\n", ans);
	}
	return 0;
}
