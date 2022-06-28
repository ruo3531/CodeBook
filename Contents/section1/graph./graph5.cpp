堆排序

// 堆排序（Heapsort）是指利用堆这种数据结构所设计的一种排序算法。堆积是一个近似完全二叉树的结构，并同时满足堆积的性质：即子结点的键值或索引总是小于（或者大于）它的父节点。

void Heap_just(int a[], int root, int heap_size) {
    if(root < heap_size) {
        int Min = root;
        int l_son = root << 1 | 1;
        int r_son = (root << 1) + 2;
        if(l_son < heap_size && a[Min] > a[l_son]) Min = l_son;
        if(r_son < heap_size && a[Min] > a[r_son]) Min = r_son;
        if(Min == root) return ;
        a[root] ^= a[Min];
        a[Min] ^= a[root];
        a[root] ^= a[Min];
        Heap_just(a, Min, heap_size);
    }
}
void build_heap(int a[], int n) {
    for(int i = n / 2; i >= 0; i--) {
        Heap_just(a, i, n);
    }
}
void Heap_sort(int a[], int n) {
    build_heap(a, n);
    for(int i = n - 1; i > 0; i--) {
        a[i] ^= a[0];
        a[0] ^= a[i];
        a[i] ^= a[0];
        Heap_just(a, 0, i);
    }
}
// 时间复杂度： O(nlogn) 。
