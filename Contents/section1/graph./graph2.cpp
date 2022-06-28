void kruskal(){
    int cost = 0;
    vector<Edge> E;
    init();
    for (auto it : E){
        it.s = Find(it.s);
        it.t = Find(it.t);
        if (it.s == it.t)
            continue;
        cost += it.w;
        Union(it.s, it.t);
    }
}