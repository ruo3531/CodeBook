long long ex_gcd(long long a, long long b, long long &x, long long &y){
    if(b == 0){
        x = 1, y= 0;
        return a;
    }else{
        long long r = ex_gcd(b, a% b, y, x);
        y -= x*(a/b);
        return r;
    }
}