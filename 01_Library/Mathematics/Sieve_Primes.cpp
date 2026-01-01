  int N = 1000;
  bool check[N + 1];
  // Khởi tạo tất cả các số [2...N] đều là số nguyên tố
  for (int i = 2; i <= N; i++) {
    check[i] = true;
  }

  // Thuật toán sàng nguyên tố
  // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
  
  for(int i = 2; i <= sqrt(2e5); i++){
        if(sievie[i] == true)
            for(int j = i*i; j <= 2e5; j += i)
                sievie[j] = false;//đúng
    }

  //chú ý
  for(int i = 2; i <= 2e5; i++){
        if(sievie[i] == true)
            for(int j = i*i; j <= 2e5; j += i)
                sievie[i] = false; //hay bị nhầm dòng này
    }

//sàng ước
for(ll i = 1; i < n; i++) {
        for(ll j = i; j < n; j += i) {
            a[j]++;
        }
    }

//số nguyên tố nhỏ nhất tạo thành số đó của vị trí i
vector<int>sievie (MAXn + 5);
    for(int i = 1; i <= MAXn; i++){
      sievie[i] = i;
    }
    for(int i = 2; i <= MAXn; i++){
        if(sievie[i] == i)
            for(int j = i * i; j <= MAXn; j += i){
                if(sievie[j] == j) sievie[j] = i;
            }
    }

//uoc dau tien lon nhat
for (int x = 2; x <= n; x++) {
if (sieve[x]) continue;
for (int u = 2*x; u <= n; u += x) {
sieve[u] = x;
}
}