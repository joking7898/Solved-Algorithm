#include<iostream>
#include<algorithm>
using namespace std;
// longlong �ڷ��� ����
// abs �Լ��� longlong int ���� �����ʴ´�.
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