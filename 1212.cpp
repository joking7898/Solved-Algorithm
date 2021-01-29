#include<iostream>
#include<algorithm>
using namespace std;
//333334 자리를 넘지 않는다고 하여
//int 형으로는 절대 풀지 못함.
//char로 풀어야됨 접근방식이 틀림.
int convert(int a){
    int result =0;
    for(int i =1; a>0;i=i*10){
        int binary = a%2;
        result = result + binary*i;
        a = a / 2;
    }
    return result;
}
int main(){
    int a;
    cin >> std::oct >> a;
    cout << convert(a);
}
