#include<iostream>
#include<vector>
using namespace std;
int main() {
	int a,b,sum;
	vector<int> v;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		v.push_back(b);
	}
	sum = v.front() * v.back();
	cout << sum;
}