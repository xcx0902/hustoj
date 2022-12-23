#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

const int N = 1001, M = 10001;
int n, m, qNum, d[N][N], vis[N];

namespace graph {
	int cnt, head[N];
	struct node {
		int to, next, w;
	} e[M << 1];
	void addEdge(int u, int v, int w) {
		cnt++;
		e[cnt].to = v;
		e[cnt].w = w;
		e[cnt].next = head[u];
		head[u] = cnt;
	}
}
using namespace graph;

namespace deQueue {
	const int NUM = 100001;
	typedef pii Elemtype; 
	typedef struct deQueue {
		Elemtype base[NUM];
		int front, back;
	} myDeque;
	void init(deQueue &Q) {
		Q.back = Q.front = 1;
	}
	int push_front(deQueue &Q, Elemtype x) {
		if (Q.front < Q.back) {
			if (Q.front == 1)
				if (Q.back == NUM - 1) return 1;
				else Q.base[Q.front = NUM - 1] = x;
			else Q.base[--Q.front] = x;
		}
		else if (Q.front == Q.back)
			if (Q.front == 1) Q.base[Q.front = NUM - 1] = x;
			else Q.base[--Q.front] = x;
		else if (Q.front == Q.back + 1) return 1;
		else Q.base[--Q.front] = x;
		return 0;
	}
	int push_back(deQueue &Q, Elemtype x) {
		if (Q.front == Q.back)
			if (Q.back == NUM - 1) Q.base[Q.back] = x, Q.back = 1;
			else Q.base[Q.back++] = x;
		else if (Q.front < Q.back)
			if (Q.back == NUM - 1)
				if (Q.front == 1) return 1;
				else Q.base[Q.back = 1] = x;
			else Q.base[Q.back++] = x;
		else if (Q.back + 1 == Q.front) return 1;
		else Q.base[Q.back++] = x;
		return 0;
	}
	int pop_front(deQueue &Q) {
		if (Q.front == Q.back) return 1;
		else if (Q.front < Q.back) ++Q.front;
		else if (Q.front == NUM - 1) Q.front = 1;
		else ++Q.front;
		return 0;
	}
	int pop_back(deQueue &Q) {
		if (Q.back > Q.front) --Q.back;
		else if (Q.back == Q.front) return 1;
		else if (Q.back == 1) Q.back = NUM - 1;
		else --Q.back;
		return 0;
	}
	int size(deQueue &Q) {
		if (Q.back >= Q.front) return Q.back - Q.front;
		else return Q.back + NUM - Q.front; 
	}
	Elemtype front(deQueue &Q) {
		return Q.base[Q.front];
	}
	Elemtype back(deQueue &Q) {
		return Q.base[Q.back];
	}
}
using namespace deQueue;
myDeque q;

void bfs(int x) {
	memset(vis, 0, sizeof vis);
	init(q);
	push_back(q, {x, 0});
	while (size(q)) {
		pii t = front(q); pop_front(q);
		int u = t.first, dis = t.second;
		if (vis[u]) continue;
		d[x][u] = min(d[x][u], dis);
		vis[u] = 1;
		for (int i = head[u]; i; i = e[i].next)
			if (e[i].w == 0) push_front(q, {e[i].to, dis});
			else push_back(q, {e[i].to, dis + 1});
	}
}

int main() {
	memset(d, 0x3f, sizeof d);
	scanf("%d%d", &n, &m);
	for (int i = 1, u, v, w; i <= m; i++) {
		scanf("%d%d%d", &u, &v, &w);
		addEdge(u, v, w);
		addEdge(v, u, w);
	}
	for (int i = 1; i <= n; i++)
		bfs(i);
	scanf("%d", &qNum);
	for (int u, v; qNum--;) {
		cin >> u >> v;
		if (d[u][v] == 0x3f3f3f3f) puts("INF");
		else printf("%d\n", d[u][v]);
	}
	return 0;
}