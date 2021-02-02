#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    int a,b,c;
    vector<int> v1;
    cin >> a >> b >> c;
    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);
    sort(v1.begin(),v1.end());
    // a=b b=c a=c 
    if(a==b==c){
        cout << 10000 + 1000 * a;
    }
    else{
        if(a==b||b==c||c==a){
            if(a==b){ cout << 1000 + a*100; }
            else if(b==c){ cout << 1000 + b*100; }
            else{ cout<< 1000 + a*100; }
        }
        else{
            cout << v1.back() * 100;
        }
    }
}