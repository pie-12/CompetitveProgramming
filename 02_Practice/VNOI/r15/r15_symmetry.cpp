#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;  // Lấy chữ số cuối cùng
        reversedNum = reversedNum * 10 + digit;  // Xây dựng số đảo ngược
        num = num / 10;  // Loại bỏ chữ số cuối cùng
    }
    return reversedNum;
}   

signed main() {
    //freopen("r15_symmetry.inp","r",stdin);
    //freopen("r15_symmetry.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a;
    cin >> b;

    vector<int> palindromes;
        for (int i = 1; i <= 9; i++) {
            palindromes.push_back(i);
        }
        
    // Tạo các số đối xứng có độ dài chẵn
    for (int x = 2; x < 10; x = x + 2){  
        for (int i = pow(10,x/2)/10; i < pow(10,x/2); i++) {
            palindromes.push_back(i * pow(10,x/2) + reverseNumber(i));
        }
    }
    

    // Tạo các số đối xứng có độ dài lẻ    
    for(int x = 3; x < 10; x = x + 2)
        for (int i = pow(10,x/2)/10; i < pow(10,x/2); i++) 
            for (int j = 0; j <= 9; j++) {
                palindromes.push_back(i * pow(10,x/2+1) + reverseNumber(i) + j *pow(10,x/2));
        }    
  
    sort(palindromes.begin(), palindromes.end());
    int sum_1 = 0, sum_2 = 0;
    for (auto x : palindromes){
    if (x <= b) sum_1 += x;
    if (x < a) sum_2 += x;
    }
    cout << sum_1 - sum_2;
    return 0;
}

