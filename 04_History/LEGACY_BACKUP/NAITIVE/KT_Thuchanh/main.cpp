#include <bits/stdc++.h>
using namespace std;
int main()
{
//    //bai2
//    string s; int dem = 0;
//    cout << "Nhap chuoi: "; getline (cin,s);
//    for (int i = 0; i < s.length(); i++)
//        if (s[i]>='0'&&s[i]<='9') dem++;
//    cout << "So ky tu chu so: " << dem << '\n';
//    s[0]=toupper(s[0]);
//    cout << "Xau sau khi chuyen doi la: " << s;

//    //bai1
//    int n, k;
//    int sum = 0, dem = 0, demk = 0;
//    cout << "Nhap n: "; cin >> n;
//    cout << "Nhap k: "; cin >> k;
//    int a[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        cout << "a[" << i << "] = ";
//        cin >> a[i];
//        if (a[i]>=k){sum+=a[i];dem++;}
//    }
//    cout << "Vi tri cua k trong mang la: ";
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i]==k){cout << i << " ";demk++;}
//    }
//    if (demk==0)cout << "khong co";
//
//    float tbc = 1.0*sum/dem;
//    cout << "\nTrung binh cong cac phan tu >= k la: " << tbc;

//    //bai1
//    int n, sum = 0;
//    cout << "Nhap n: "; cin >> n;
//    int a[n];
//    for (int i = 0; i < n; i++)
//    {
//        cout << "a[" << i << "] = ";
//        cin >> a[i];
//    }
//    cout << "Cac phan tu >= 0 va <= 10 la: ";
//    for (int i = 0 ; i < n; i++)
//    {
//        if (a[i]>=0&&a[i]<=10) cout << a[i] << " ";
//        if (a[i]%2!=0&&a[i]>10) sum+=a[i];
//    }
//    cout << "\nTong cac phan tu so le > 10 la: " << sum;
//
//    //bai2
//    string s;
//    int dem = 0;
//    cout << "Nhap chuoi: ";
//    getline (cin, s);
//    for (int i = 0; i < s.length(); i++)
//        if (s[i]=='c')dem++;
//    int vitri = s.find('c') ;
//    cout << "So lan xuat hien ky tu 'c': " << dem;
//    cout << "\nVi tri dau tien ky tu 'c' xuat hien la: " << vitri;

//    //bai1
//    int n, sum = 0, dem = 0;
//    cout << "Nhap n: ";cin >> n;
//    int a[n];
//    for (int i = 0; i < n; i++)
//        {
//            cout << "a[" << i << "] = ";
//            cin >> a[i];
//            if(a[i]%2!=0)dem++;
//            if(a[i]>=-20 && a[i]<=50)sum+=a[i];
//        }
//        cout << "So luong cac so le: "<< dem;
//        cout << "\nTong cac phan tu trong khoang -20 den 50: " << sum;

//    //bai2
//    string s;
//    int dem = 0;
//    cout << "Nhap s: ";
//    getline(cin,s);
//    for (int i = 0; i < s.length(); i++)
//        if (s[i]>='A' && s[i] <= 'Z')dem++;
//        cout << "So ky tu in hoa: "<< dem;
//    for (int i = 0; i < s.length(); i++)
//        s[i] = char(toupper(s[i]));
//        cout << "\nXau sau khi chuyen doi la: " << s;

//      //bai2
//      string s;
//    int dem = 0;
//    cout << "Nhap s: ";
//    getline(cin,s);
//    for (int i = 0; i < s.length(); i++)
//        if (s[i]==' ')dem++;
//        cout << "So ky tu trang la: "<< dem;
//    for (int i = 0; i < s.length(); i++)
//        s[i] = char(toupper(s[i]));
//        cout << "\nXau sau khi chuyen doi la: " << s;

//    //bai 1
//    float sum = 0;
//    srand(time(0));
//    int n; cin >> n;
//    int a[n];
//
//    for (int i = 0; i < n; i++)
//    {
//        a[i]=rand()%51;
//        sum+=1.0*sqrt(a[i]);
//    }
//    cout << "Gia tri cac phan tu o vi tri le la: ";
//    for (int i = 1; i < n; i=i+2)
//        {
//            cout << a[i] << " ";
//        }
//    cout << "\nTong can bac hai cua cac phan tu trong mang A la: " <<sum;




    return 0;
}
