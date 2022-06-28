#define M 100005
int tree[M] = {};  //parents
int r[M] = {};
int Find(int n){
    if(tree[n] == 0) return n;   //find root
    return tree[n] = Find(tree[n]);
}
void Union(int a, int b){
    a = Find(a);
    b = Find(b);
    if (a == b) return;
    if (r[a] < r[b]) tree[a] = b;   //a接b 
    else if (r[a] > r[b]) tree[b] = a;  //b接a
    else{
        tree[a] = b;
        r[a]++;
    }
}
