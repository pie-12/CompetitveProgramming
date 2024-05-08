int binpow (int a, int b){

    if (b == 0)
        return 1;
    int x = binpow (a, b/2);
    if (b % 2 == 1)
        return a * x * x % d;
    else
        return x * x % d;

}
