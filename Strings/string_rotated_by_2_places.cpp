#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const long long INF = LLONG_MAX / 2;
#define int long long

string rotate_back(string a){
    string empty;
    for(int i=0; i<2; i++){
        empty[i]=a[i];
    }

    for(int i=2; i<a.size(); i++){
        a[i-2]=a[i];
    }

    for(int i=a.size()-2; i<a.size(); i++){
        a[i]=empty[i-(a.size()-2)];
    }

    return a;

}

string rotate_front(string a){
    string empty;
    for(int i=a.size()-2; i<a.size();i++){
        empty[i-(a.size()-2)]=a[i];
    }

    for(int i=a.size()-3; i>=0; i--){
        a[i+2]=a[i];
    }

    for(int i=0; i<2; i++){
        a[i]=empty[i];
    }

    return a;
}
    
void solve(){
    string a;
    string b;

    string front=rotate_front(a);
    string back=rotate_back(a);

    if(front==b || back==b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
    
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
    return 0;
}
