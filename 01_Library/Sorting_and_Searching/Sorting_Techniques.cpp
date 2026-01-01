//sort phan tu thu 2 cua pair
bool cmp (pair <int, int> a, pair <int, int> b){
        return(a.second < b.second);
}
//sort string (ngắn hơn đứng trc, bằng thì xét thứ tự từ điển)
bool str (string s1, string s2){
    if(s1.size() == s2.size())
        return s1 < s2;
    else return (s1.size() < s2.size());
}
int main(){
    sort(v.begin(),v.end(),cmp);
    return 0;
}
