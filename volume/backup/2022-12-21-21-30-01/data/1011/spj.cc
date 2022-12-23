#include <bits/stdc++.h>
#define sub(_l, _r) s.substr(_l, ((_r) - (_l) + 1)).c_str()
#define gcd __gcd
using namespace std;

int a, b, c, d, e, f;
int posl = -1, poslx = -1, posly = -1, posr = -1, posrx = -1, posry = -1;
int t, k, l, m, n, p, q;
string s;

int main(int argc, char *argv[]) {
	ifstream in(argv[1]);
	ifstream ans(argv[2]);
	ifstream out(argv[3]);
	in >> a >> b >> c >> d >> e >> f;
	out >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			if (posl != -1) posr = i;
			else posl = i;
		}
		if (s[i] == 'x') {
			if (poslx != -1) posrx = i;
			else poslx = i;
		}
		if (s[i] == 'y') {
			if (posly != -1) posry = i;
			else posly = i;
		}
	}
	t = atoi(sub(0, posl - 1));
	if (t == 0) t = 1;
	if (posl + 1 == poslx) k = 1;
	else if (posl + 2 == poslx && s[posl + 1] == '-') k = -1;
	else k = atoi(sub(posl + 1, poslx - 1));
	if (poslx + 2 == posly) l = (s[poslx + 1] == '+' ? 1 : -1);
	else l = atoi(sub(poslx + 1, posly - 1));
	m = atoi(sub(posly + 1, posr - 2));
	if (posr + 1 == posrx) n = 1;
	else if (posr + 2 == posrx && s[posr + 1] == '-') n = -1;
	else n = atoi(sub(posr + 1, posrx - 1));
	if (posrx + 2 == posry) p = (s[posrx + 1] == '+' ? 1 : -1);
	else p = atoi(sub(posrx + 1, posry - 1));
	q = atoi(sub(posry + 1, s.size() - 2));
	int g = gcd(abs(a), gcd(abs(b), gcd(abs(c), gcd(abs(d), gcd(abs(e), abs(f))))));
	if (g != t) return 1;
	a /= g, b /= g, c /= g, d /= g, e /= g, f /= g;
	if (k * n != a || k * p + l * n != b ||
		l * p != c || k * q + m * n != d ||
		m * q != f || l * q + m * p != e)
		return 1;
	return 0;
}
