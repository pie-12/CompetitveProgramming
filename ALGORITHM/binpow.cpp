ll binpow (int a, int b, int d){
    if (b == 0) return 1;
    ll x = binpow (a, b/2, d);
    if (b % 2 == 1) return a * x * x % d;
    else return x * x % d;
}
