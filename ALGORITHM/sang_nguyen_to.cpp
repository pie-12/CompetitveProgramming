  int N = 1000;
  bool check[N + 1];
  // Khởi tạo tất cả các số [2...N] đều là số nguyên tố
  for (int i = 2; i <= N; i++) {
    check[i] = true;
  }

  // Thuật toán sàng nguyên tố
  // Nếu một số là số nguyên tố, thì tất cả các bội của nó không phải số nguyên tố
  for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      for (int j = i * i; j <= N; j += i) 
        check[j] = false;
    }
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