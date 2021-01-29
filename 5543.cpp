#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main(){
    int a;
    list<int> arr;
    list<int> arr1;
    for(int i =0;i<3;i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i =0;i<2;i++){
        cin>>a;
        arr1.push_back(a);
    }
    arr.sort();
    arr1.sort();
    cout<< (arr1.front()+arr.front())-50;
}