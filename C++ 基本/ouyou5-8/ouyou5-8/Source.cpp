#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(void)
{
	queue<char> word;
	string in;

	cout << "‰p’PŒê‚ð“ü—Í:";
	cin >> in;

	for (int i = 0; i < in.length(); i++) {
		word.push(in[in.length() - i - 1]);
	}
	int count = 0;
	while (!word.empty())
	{
		count++;
		if (!((count+1) % 3)) {
			cout<< ",";
		}
		cout << word.front();
		word.pop();
		
	}
	cout << endl;
	return 0;
}