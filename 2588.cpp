#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b;
    int x,y,z;
    cin >> a>>b;
    x = b/100;
    y = (b-(x*100))/10;
    z = b%10;
    cout<<a*x<<endl;
    cout<<a*y<<endl;
    cout<<a*z<<endl;
    cout<<a*b<<endl;
}