#include<iostream>
#include<algorithm>
using namespace std;
//333334 �ڸ��� ���� �ʴ´ٰ� �Ͽ�
//int �����δ� ���� Ǯ�� ����.
//char�� Ǯ��ߵ� ���ٹ���� Ʋ��.
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
