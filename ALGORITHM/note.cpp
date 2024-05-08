    vector <pair<int,int>> v;
    v.push_back(make_pair(2,3));
    for(auto x : v)
        x.second++;
    cout << v[0].second; // vẫn là 3

    for(int i = 0; i < v.size(); i++)
        v[i].second++;
    cout << v[0].second; // lúc này mới 4