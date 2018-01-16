#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(void){
	queue<string> words;
	string in;
	do
	{
		std::cout << "•¶Žš—ñ‚ð“ü—Í:";
		getline(cin, in);
		words.push(in);
	} while (in != "");
	while (!words.empty())
	{
		cout << words.front() << endl;;
		words.pop();
	}
	return 0;
}