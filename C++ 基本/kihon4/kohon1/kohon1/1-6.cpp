#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	cout << "姓を入力:" << endl;
	cin >> a;
	cout << "名を入力:" << endl;
	cin >> b;
	cout <<"名前は「" << a + b <<"」です。"<< endl;
	return 0;
}