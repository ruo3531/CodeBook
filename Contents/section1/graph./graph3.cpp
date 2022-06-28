const int INF = 1e9;
const int MAXN = 1000;
struct Edge {
    int v;
    int w;
};
int n, m;
vector<Edge> G[MAXN];   //向量記圖
int dis[MAXN];
void SPFA(int s) {
    // 記錄目前的點是否在 queue 中
    bool inq[n];
    for (int i = 0; i < n; i++) {
        dis[i] = INF;
        inq[i] = false;
    }
    dis[s] = 0;
    inq[s] = true;
    queue<int> q;
    q.push(s);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        inq[u] = false;
        for (Edge e : G[u]) {
            if (dis[e.v] > dis[u] + e.w) {
                dis[e.v] = dis[u] + e.w;
                if (!inq[e.v]) {
                    inq[e.v] = true;
                    q.push(e.v);
                }
            }
        }
    }
}