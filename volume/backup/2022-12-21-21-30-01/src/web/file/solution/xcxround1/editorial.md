# XCX Round #1 Official Editorial

**Problem A**

本题有三种 $\texttt{op}$，我们一个一个地看。

对于 $\texttt{op} = \texttt{diff}$，易证当 $n$ 为偶数时才有解，而且当 $a = b = 0, c = n \div 2$ 时，满足题目要求，所以判断 $n$ 是否是偶数并计算 $n \div 2$ 即可。

对于 $\texttt{op} = \texttt{gcd}$，易证当 $n \ge 3$ 时必有解（题目中已经保证 $n \ge 3$），而且当 $a = 1, b = c = n - 2$ 时，满足题目要求，所以计算 $n - 2$ 即可。

对于 $\texttt{op} = \texttt{xor}$，此情况在某场 `Div. 2 - A` 中已经讨论过，此处不再赘述。

Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		string op; int n;
		cin >> op >> n;
		if (op == "diff") {
			if (n & 1) cout << -1 << endl;
			else cout << 0 << " " << 0 << " " << n / 2 << endl;
		}
		else if (op == "gcd") {
			cout << 1 << " " << n - 2 << " " << n - 2 << endl;
		}
		else if (op == "xor") {
			if (n & 1) cout << -1 << endl;
			else cout << 0 << " " << 0 << " " << n / 2 << endl;
		}
	} 
	return 0;
}
```



**Problem B1**

本题通过 `DP` 打表后发现，答案为 $3^n$，证明略，具体听讲解。

（`DP` 方法见 `B2` 题解）

Code (C++)

```cpp
#include <bits/stdc++.h>
#define int long long
using namespace std;
 
const int mod = 988244533;
 
int qpow(int a, int b) {
	if (b == 0) return 1;
	if (b == 1) return a % mod;
	int tmp = qpow(a, b / 2);
	if (b & 1) return tmp * tmp % mod * a % mod;
	else return tmp * tmp % mod; 
}
 
signed main() {
	int n;
	cin >> n;
	cout << qpow(3, n) << endl;
	return 0;
}
```

 

**Problem B2**

本题一看就是裸的 `DP`：令 $f_{i, j, k}$ 表示第 $i$ 步，两只跳蚤在位置 $j, k$ 时的情况数（具体见代码）。

但是这样空间复杂度是 $O(36n)$ 的，当 $n = 10^6$ 时，所需空间约为 $144\text{MB}$，无法通过。

考虑滚动数组，将 $f$ 的第一维压掉即可。

Code (C++)

```cpp
#include <bits/stdc++.h>
#define l(_x) (((_x) + 5) % 6)
#define r(_x) (((_x) + 1) % 6)
using namespace std;
 
const int mod = 988244533;
char pos1, pos2; 
int a, b, n, ans, f[2][6][6];
 
void testlr() {
	cout << "l(0): " << l(0) << endl;
	cout << "l(1): " << l(1) << endl;
	cout << "r(5): " << r(5) << endl;
	cout << "r(4): " << r(4) << endl;	
}
 
void debugf(int x) {
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			cout << f[x & 1][i][j] << endl;
}
 
int main() {
//	testlr();
	cin >> pos1 >> pos2 >> n;
	a = pos1 - 'A', b = pos2 - 'A';
	f[0][a][b] = 1;
//	debugf(0);
	for (int i = 1; i <= n; i++) {
		memset(f[i & 1], 0, sizeof f[i & 1]);
		for (int j = 0; j < 6; j++)
			for (int k = 0; k < 6; k++)
				if (j != k) {
					if (l(j) != l(k)) (f[i & 1][j][k] += f[(i - 1) & 1][l(j)][l(k)]) %= mod;
					if (l(j) != r(k)) (f[i & 1][j][k] += f[(i - 1) & 1][l(j)][r(k)]) %= mod;
					if (r(j) != l(k)) (f[i & 1][j][k] += f[(i - 1) & 1][r(j)][l(k)]) %= mod;
					if (r(j) != r(k)) (f[i & 1][j][k] += f[(i - 1) & 1][r(j)][r(k)]) %= mod; 
				}
//		debugf(i);
	}
	for (int i = 0; i < 6; i++)
		for (int j = 0; j < 6; j++)
			(ans += f[n & 1][i][j]) %= mod;
	cout << ans << endl;
	return 0;
}
```



**Problem C1**

模拟题，直接上代码。

Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;
 
struct node {
	bool deleted = 0;
	int coefficient;
	map<char, int> mp;
} a[10001];
map<char, int> tmp;
map<map<char, int>, int> vis;
node commonFactor;
 
void print(node x) {
	if (x.coefficient != 1) cout << x.coefficient;
	int cnt = 0;
	for (char c = 'a'; c <= 'z'; c++)
		if (x.mp[c] != 0)
			cnt++;
	for (char c = 'a'; c <= 'z'; c++)
		if (x.mp[c] != 0)
			cout << (cnt == 1 && x.coefficient == 1? "" : "*") << c << (x.mp[c] == 1? "" : "^" + to_string(x.mp[c]));
}
 
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int m, t;
		cin >> m >> t;
		a[i].coefficient = t;
		tmp.clear();
		for (int j = 1; j <= m; j++) {
			char c; int num;
			cin >> c >> num;
			tmp[c] = num;
		}
		a[i].mp = tmp;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[a[i].mp]) {
			a[i].deleted = 1;
			a[vis[a[i].mp]].coefficient += a[i].coefficient;
		}
		else vis[a[i].mp] = i;
	}
	int g = a[1].coefficient;
	for (int i = 2; i <= n; i++)
		if (!a[i].deleted)
			g = __gcd(g, a[i].coefficient);
	commonFactor.coefficient = g;
	for (char c = 'a'; c <= 'z'; c++) {
		int mn = 0x3f3f3f3f;
		for (int i = 1; i <= n; i++)
			if (!a[i].deleted)
				mn = min(mn, a[i].mp[c]);
		commonFactor.mp[c] = mn;
	}
	print(commonFactor);
	cout << endl;
	return 0;
}
```



**Problem C2**

将 $(kx + ly + m)(nx + py + q)$ 乘出来后可得 $knx^2 + (kp + ln)xy + lpy^2 + (kq + mn)x + (lq + mp)y + mq$。

故 $a = tkn, b = t(kp + ln), c = tlp, d = t(kq + mn), e = t(lq + mp), f = tmq$。将 $a, b, c, d, e, f$ 求最大公因数得出 $t$，并将它们各除以 $t$，再对 $a, c, f$ 进行分解质因数（注意考虑负因数，具体处理方法见代码），得出 $k, l, m, n, p, q$，最后判断是否满足上面 $6$ 各式子即可。

**注意：** 打印时需要注意系数为 $1$ 或 $-1$ 的情况。

Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;
 
int a, b, c, d, e, f, g;
vector<int> da, dc, df;
 
int gcd(int x, int y) {
	x = abs(x); y = abs(y);
	return !y? x : gcd(y, x % y);
}
 
vector<int> div(int x) {
	vector<int> tmp, ret;
	int up = sqrt(abs(x));
	for (int i = 1; i <= up; i++)
		if (x % i == 0) {
			tmp.push_back(i);
			if (i * i != x) tmp.push_back(x / i);
		}
	sort(tmp.begin(), tmp.end());
	ret = tmp;
	for (int num: tmp)
		ret.push_back(-num);
	return ret;
}
 
string pr(int num) {
	if (num == 1) return "";
	else if (num == -1) return "-";
	else return to_string(num);
}
 
void print(int a, int b, int c) { // ax + by + c
	if (a == 0) cout << pr(b) << "y" << (c >= 0 ? "+" : "") << c;
	else if (b == 0) cout << pr(a) << "x" << (c >= 0 ? "+" : "") << c;
	else if (c == 0) cout << pr(a) << "x" << (b >= 0 ? "+" : "") << pr(b) << "y";
	else cout << pr(a) << "x" << (b >= 0 ? "+" : "") << pr(b) << "y" << (c >= 0 ? "+" : "") << c; 
}
 
void printAns(int k, int l, int m, int n, int p, int q) {
	if (g != 1) cout << g;
	cout << "(";
	print(k, l, m);
	cout << ")(";
	print(n, p, q);
	cout << ")" << endl; 
}
 
int main() {
	cin >> a >> b >> c >> d >> e >> f;
	g = gcd(a, gcd(b, gcd(c, gcd(d, gcd(e, f)))));
	a /= g, b /= g, c /= g, d /= g, e /= g, f /= g;
//	cout << "#" << g << endl;
	da = div(a); dc = div(c); df = div(f);
//	cout << '#' << endl;
//	cerr << da.size() << " " << dc.size() << " " << df.size() << endl;
	// ax^2 + bxy + cy^2 + dx + ey + f
	// (kx + ly + m)(nx + py + q)
	for (int k: da)
		for (int l: dc)
			for (int m: df) {
				int n = a / k, p = c / l, q = f / m;
				if (k * p + l * n == b && l * q + m * p == e && k * q + n * m == d) {
					printAns(k, l, m, n, p, q);
					return 0;
				}
			}
	return 0;
}
```



**Problem D**

裸的容斥。细节见代码。

```cpp
#include <bits/stdc++.h>
#define int long long
using namespace std;
 
const int mod = 988244533;
int n, len, ans;
string s;
vector<string> a;
vector<int> c;
 
int qpow(int a, int b) {
	if (b == 0) return 1;
	if (b == 1) return a % mod;
	int tmp = qpow(a, b / 2) % mod;
	if (b & 1) return tmp * tmp % mod * a % mod;
	else return tmp * tmp % mod;
}
 
void init() {
	cin >> s;
	len = s.length();
	s = " " + s;
}
 
bool checkStar() {
	for (int i = 1; i <= len; i++)
		if (s[i] == '*')
			return true;
	return false;
}
 
void division() {
	int last = 1;
	a.push_back("");
	for (int i = 1; i <= len; i++)
		if (s[i] == '|') {
			a.push_back(s.substr(last, i - last));
			last = i + 1;
		}
	a.push_back(s.substr(last, len - last + 1));
	n = a.size() - 1;
}
 
pair<string, int> merge(string x, string y) {
	if (x.size() != y.size()) return {"", 0};
	int clen = x.size();
	string ans;
	for (int i = 0; i < clen; i++) {
		if (x[i] != '?' && y[i] != '?' && x[i] != y[i]) return {"", 0};
		if (x[i] != '?' && y[i] != '?' && x[i] == y[i]) ans += x[i];
		if (x[i] == '?' && y[i] != '?') ans += y[i];
		if (x[i] != '?' && y[i] == '?') ans += x[i];
		if (x[i] == '?' && y[i] == '?') ans += '?';
	}
	return {ans, 1};
}
 
int calc() {
	if (c.size() == 0) return -1;
	for (auto i: c)
		if (a[i].size() != a[c[0]].size())
			return -1;
	string t;
	int clen = a[c[0]].size();
	for (int i = 1; i <= clen; i++)
		t += '?';
	for (auto i: c) {
		pair<string, int> tmp = merge(t, a[i]);
		if (tmp.second == 0) return -1;
		else t = tmp.first;
	}
	if (c.size() == 1) t = a[c[0]];
	int ret = 0;
	for (auto ch: t)
		if (ch == '?')
			ret++;
	return ret;
}
 
void work() {
	if (checkStar()) {
		cout << "INF" << endl;
		return;
	}
	division();
	for (int i = 0; i < (1 << n); i++) {
		int tmp = i;
		c.clear();
		for (int j = 1; j <= n; j++) {
			if (tmp & 1) c.push_back(j);
			tmp >>= 1;
		}
		int num = calc();
		if (num != -1) num = qpow(26, num);
		else num = 0;
		if (c.size() & 1) ans = (ans + num) % mod;
		else ans = (ans - num + mod) % mod;
	}
	cout << ans << endl;
}
 
signed main() {
	init();
	work();
	return 0;
}
```

