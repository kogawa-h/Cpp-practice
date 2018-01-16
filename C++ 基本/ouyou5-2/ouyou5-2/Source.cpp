#include<iostream>
#include<map>
#include<string>
#include<cstdlib>
using namespace std;

int main(void){
	map<string,string> number;
    string in;
	string out;
	number["0"] = "○";
	number["1"] = "一";
	number["2"] = "二";
	number["3"] = "三";
	number["4"] = "四";
	number["5"] = "五";
	number["6"] = "六";
	number["7"] = "七";
	number["8"] = "八";
	number["9"] = "九";
	cout << "整数を入力してください:";
	cin >> in;

	for (int i = 0; i < in.length(); i++) {
		if (number.find(in.substr(i, 1)) == number.end())
		{
			cout << "整数の値を入力してください。" << endl;
			return EXIT_FAILURE;
		}
	}
	out = "";
	for (int i = 0; i < in.length(); i++)
	{
		if (!(i % 3)) {
			out = "," + out;
		}
		out = number[in.substr(in.length() - 1 - i, 1)] + out;
	}
	out.pop_back();
	cout << "変換結果:" << out << endl;
	return 0;
}