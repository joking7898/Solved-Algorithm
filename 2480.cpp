#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int a,b,c,max;
    cin >> a >> b >> c;
    max = (a >= b && a >= c) ? a :(b >= a && b >= c) ? b : c;
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
            cout << max * 100;
        }
    }
}