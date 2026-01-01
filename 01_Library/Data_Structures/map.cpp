map
map<int,int>mp;
//(key,value)
Các phần tử trong map sắp xếp theo key tăng dần
mp[100] = 200; // (100, 200)
cout<<mp[100]; // 200;
key k trùng nhau
các ptu trong map là các pair
//insert
mp.insert({...,...});
//count
mp.count(100); //tim key
//find
mp.find(..); trả về it
if (mp.find(...) != mp.end()) { }
//erase
mp.erase(..);
 
//multimap<int,int>mp; có thể key trùng
//unodered_map<int,int>um; không sắp xếp
nếu key không có, value sẽ là 0

vector
vector <int> v (n,5) ; // fill
cout << *max_element(v.begin(), v.end()
binary_search(a, a+n, value);