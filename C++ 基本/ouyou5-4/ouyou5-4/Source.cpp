#include<iostream>
#include<set>
#include<string>

using namespace std;

int main(void)
{
    set<char> a;
	string in;
    cout << "�p�P������:";
	cin >> in;
	for (int i = 0; i < in.length(); i++) {
		a.insert(in[i]);
	}
	cout << "�g�p����Ă���A���t�@�x�b�g:";
	for (set<char>::iterator i = a.begin(); i != a.end(); i++) {
		cout << *i;
	}
	return 0;
}