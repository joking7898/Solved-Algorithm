#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b,c,h,m;
    scanf("%d %d", &a,&b);
    scanf("%d", &c);
    h = c/60;
    m = c%60;
    
    b = b+m;
    if(b >=60){
        a = a+1;
        b = b-60;
    }
    a = a+h;
    if( a>= 24){
        a = a-24;
    }
    cout << a<<" " << b;
}