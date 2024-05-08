 //DAY CON TANG DAI NHAT (LIS)
int n;
cin >> n;
vector <int> v;
for (int i = 0; i< n; i++)
    cin >> v[i];
vector <int> L(n , 1);

for (int i = 0; i < n; i++){
    for (int j = 0; j < i; j++)
        if (v[i] > v[j])
            L[i] = max(L[i],L[j]+1);
}
    cout << *max_element(L.begin(),L.end());

//XEP BALO (Knapsack)
int n, m;
//n : so luong do vat
//m: khoi luong nang nhat
cin >> n >> m;
int w[n + 1], v[n + 1]; // weight, value;
for (int i = 1; i <= n; i++)
    cin >> w[i];
for (int i = 1; i <= n; i++)
    cin >> v[i];
int dp[n + 1][m + 1];
memset(dp,0,sizeof(dp));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++){
            dp[i][j] = dp[i-1][j];
            if (j >= w[i]){
                dp[i][j] = max(dp[i - 1][j],dp[i - 1][j - w[i]] + v[i]);
            }
        }
        cout << dp[n][m];

//TAP CON CO TONG BANG S (Subset Sum)
vector <int> a(n);
for (int i = 0; i < n; i++){
    cin >> a[i];
}
vector <bool> dp(S+1,false);
dp[0]=true;
for (int i = 0; i < n; i++)
    for (int j = S; j >= a[i]; j--){ // LUU Y!!!
        if (dp[j-a[i]] == true) // dp[j-a[i]]: kha nang tao ra tap con co tong = j.
            dp[j] = true;
    }
    cout << dp[S];

dp[0]=true;
for (int i = 0; i < n; i++)
    for (int j = S; j >= a[i]; j--){ // LUU Y!!!
        dp[j] = dp[j] + dp[j - a[i]] // dp[j]: so kha nang tao ra tap con co tong = j.
    }
    cout << dp[S];

//XAU CON DOI XUNG DAI NHAT (Longest Palindrome Substring)

	/*
	dp[i][j]: Tinh doi xung cua xau con bat dau pos i -> pos j
	dp[i][i] = true;
	len == 2 -> so sanh s[i] s[j]
	dp[i][j] = ((s[i]==s[j])&&dp[i+1][j-1]);
	*/

	string s;
    cin >> s;
    int n = s.size();
    s = '@' + s;
    bool dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    int ans = 0;
    for (int i = 1; i <= n; i++)
        dp[i][i] = true;
    for (int len = 2; len <= n; len++){
    for (int i = 1; i <= n - len + 1; i++){
        int j = i + len - 1;
        if(len == 2)dp[i][j]=(s[i]==s[j]);
        else {
            dp[i][j] = ((s[i]==s[j])&&dp[i+1][j-1]);
            }
            if (dp[i][j])ans = max(ans, len);
        }
    }
    cout << ans;

//XAU CON CHUNG DAI NHAT (LCS)

	/*
	dp[i][j]: Do dai xau con chung dai nhat tai vi tri (i;j)
	bang cach lay i ki tu dau tien cua X va j ki tu dau tien cua Y
	dp[i][0] = 0;
	dp[0][j] = 0;
	x[i]==y[j] -> dp[i][j] = dp[i-1][j-1]+1;
	x[i]!=y[i] -> dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
	*/
	string x,y;
    cin >> x >> y;
    int n = x.size();
    int m = y.size();
    x = '@' + x;
    y = '@' + y;
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++){
            if(x[i]==y[j])dp[i][j] = dp[i-1][j-1]+1;
            else
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    cout << dp[n][m];

        //*TRUY VET LAI CHUOI, TA THEM:
    int len = dp[n][m], i = n, j = m;
    string ans;
    while (i >= 1 && j >= 1)
    {
        if (s[i] == t[j])
        {
            ans = s[i] + ans;
            len--; i--; j--;
        }
        else if (dp[i][j] == dp[i - 1][j]) i--;
        else if (dp[i][j] == dp[i][j - 1]) j--;
    }
    cout<<ans;

    /*COIN PROBLEM*/
    //    CACH 1

    int n, m;
	cin >> m >> n;
	int a[n+1];
	for (int i = 0; i < n; i++)
        cin >> a[i];
    int dp[n+1][m+1];

     for(int i=0;i<=n;++i)
        {
            for(int j=0;j<=m;++j)
            {
                if(j==0)
                    dp[i][j] = 0;
                else if(i==0)
                    dp[i][j] = 1e5;
                else if(j >= a[i-1])
                    dp[i][j] = min(1 + dp[i][j-a[i-1]], dp[i-1][j]);

                else
                    dp[i][j] = dp[i-1][j];
            }
        }
    dp[n][m] > 1e4 ? cout << -1 : cout << dp[n][m];

    //CACH 2
        int m = 7;
    vector <int> coins {2,1};
    int dp[m+1];
    dp[0] = 0;
    for (int j = 1; j <= m; j++) {
        dp[j] = 1e5;
        for (auto c : coins) {
            if (j-c >= 0) {
            dp[j] = min(dp[j], dp[j-c]+1);
            }
        }
    }
    cout << dp[m];

    //TRUY XUAT RA CAC DONG XU
    for (int j = 1; j <= m; j++) {
        dp[j] = 1e5;
        for (auto c : coins) {
            if (j-c >= 0 && dp[j-c]+1 < dp[j]) {
            dp[j] = dp[j-c]+1;
            first[j] = c;
            }
        }
    }
    while (m > 0){
        cout << first[m] << " ";
        m -= first[m];
    }




