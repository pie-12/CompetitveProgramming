int nCk (int n, int k){
    if (k == 0 || n == k) return 1;
    return nCk(n - 1, k) + nCk (n - 1, k - 1);
}
