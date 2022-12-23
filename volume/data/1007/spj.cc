#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream in(argv[1]);
	ifstream ans(argv[2]);
	ifstream out(argv[3]);
	int t;
	in >> t;
	for (int i = 1; i <= t; i++) {
		string op;
		in >> op;
		int num;
		in >> num;
		int a, b, c;
		if ((op == "diff" || op == "xor") && (num & 1)) {
			int tmp;
			out >> tmp;
			if (tmp != -1) return 1;
		}
		else {
			int a, b, c;
			out >> a;
			if (a == -1) return 1;
			out >> b >> c;
			if (op == "diff")
				if (abs(a - b) + abs(b - c) + abs(c - a) != num)
					return 1;
			else if (op == "gcd")
				if (__gcd(a, b) + __gcd(b, c) + __gcd(c, a) != num)
					return 1;
			else if (op == "xor")
				if ((a ^ b) + (b ^ c) + (c ^ a) != num)
					return 1;
		}
	}
	return 0;
}
