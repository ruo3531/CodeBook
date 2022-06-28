#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
const int MAXN = 1000;
struct Edge {
    int v;
    int w;
};
struct Item {
    int u;
    int dis;
    bool operator < (const Item &other) const {
        return dis > other.dis;
    }
};
int n, m;
vector<Edge> G[MAXN];
int dis[MAXN];
void dijkstra(int s) {
    for (int i = 0; i < n; i++) {
        dis[i] = INF;
    }
    dis[s] = 0;
    priority_queue<Item> pq;
    pq.push({s, 0});
    while (!pq.empty()) {
        // 從 priority_queue 中挑出長度最短的點
        Item now = pq.top();
        pq.pop();
        if (now.dis > dis[now.u]) {
            continue;
        }
        // 鬆弛他所連到的邊
        for (Edge e : G[now.u]) {
            if (dis[e.v] > now.dis + e.w) {
                dis[e.v] = now.dis + e.w;
                pq.push({e.v, dis[e.v]});
            }
        }
    }
}
