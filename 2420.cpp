#include<iostream>
#include<algorithm>
using namespace std;
// longlong 자료형 관련
// abs 함수는 longlong int 형은 받질않는다.
int main(){
    long long int a,b;
    cin >>a >>b;
    if(a-b < 0){
        cout << -(a-b);
    }
    else{
        cout << (a-b);
    }
}