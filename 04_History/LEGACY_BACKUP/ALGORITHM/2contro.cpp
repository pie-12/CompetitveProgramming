//Cho 2 array tang dan, lap 1 array duoc ghep tu 2 arr tren va tang dan
a=[1,3,6,8,10]
b=[2,6,7,12,14,15]

int i = 1, j = 1;
vector<int> c;
while (i <= n || j <= m){
    if (j == m + 1 || (i <= n && a[i] <= b[j]))
        c.push_back(a[i++]);
    else
        c.push_back(b[j++]);
}
for (auto it: c)
    cout << it << " ";
