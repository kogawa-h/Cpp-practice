#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(void)
{
    set<char> a;
	string in;
    cout << "英単語を入力:";
	cin >> in;
	for (int i = 0; i < in.length(); i++) {
		a.insert(in[i]);
	}
	cout << "使用されているアルファベット:";
	for (set<char>::iterator i = a.begin(); i != a.end(); i++) {
		cout << *i;
	}
	return 0;
}