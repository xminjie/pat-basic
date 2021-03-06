
1060. 爱丁顿数(25)
时间限制
250 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
英国天文学家爱丁顿很喜欢骑车。据说他为了炫耀自己的骑车功力，还定义了一个“爱丁顿数”E，即满足有E天骑车超过E英里的最大整数E。据说爱丁顿自己的E等于87。

现给定某人N天的骑车距离，请你算出对应的爱丁顿数E（<=N）。

输入格式：

输入第一行给出一个正整数N（<=105），即连续骑车的天数；第二行给出N个非负整数，代表每天的骑车距离。

输出格式：

在一行中给出N天的爱丁顿数。

输入样例：
10
6 7 6 9 3 10 8 2 7 8
输出样例：
6

大到小排序,从后遍历, a[i] > i; 即得到结果; 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, t;
	cin >> n;
	vector<int> v(n+1);
	for(int i = 1; i <= n; i++) 
		cin >> v[i];
	sort(v.begin()+1,v.end(),greater<int>());
	for(int i = n; i >= 1; i--) {
		if(v[i] > i) {
			cout << i;
			return 0;
		}
	}
	cout << 0;
return 0;
}

