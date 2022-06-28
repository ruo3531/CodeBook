// 從小到大
priority_queue<int, vector<int>, greater<int>>pq;

lower_bound(a, a + n, k);     //最左邊 ≥ k 的位置
upper_bound(a, a + n, k);     //最左邊 > k 的位置
upper_bound(a, a + n, k) - 1; //最右邊 ≤ k 的位置
lower_bound(a, a + n, k) - 1; //最右邊 < k 的位置
[lower_bound, upper_bound) //等於 k 的範圍

bool operator<(const item& rhs)const{
	return x > rhs.x || (x == rhs.x && y > rhs.y);
}