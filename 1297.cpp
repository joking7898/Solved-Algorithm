#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    float total,t1;
    cin >> a >> b >> c;
    total = a/sqrt(b*b + c*c);
    cout << int(b*total) <<" "<< int(c*total) ;
}