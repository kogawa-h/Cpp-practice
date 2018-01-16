#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main(void)
{
	stack<char> word;
	string in;
	
	cout << "‰p’PŒê‚ð“ü—Í:";
	cin >> in;
	for (int i = 0; i < in.length(); i++) {
		word.push(in[i]);
	}
	while (!word.empty())
	{
		cout << word.top();
		word.pop();
	}
	cout << endl;
	return 0;
}