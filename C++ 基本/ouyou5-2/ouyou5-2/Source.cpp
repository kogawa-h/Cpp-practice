#include<iostream>
#include<map>
#include<string>
#include<cstdlib>
using namespace std;

int main(void){
	map<string,string> number;
    string in;
	string out;
	number["0"] = "��";
	number["1"] = "��";
	number["2"] = "��";
	number["3"] = "�O";
	number["4"] = "�l";
	number["5"] = "��";
	number["6"] = "�Z";
	number["7"] = "��";
	number["8"] = "��";
	number["9"] = "��";
	cout << "��������͂��Ă�������:";
	cin >> in;

	for (int i = 0; i < in.length(); i++) {
		if (number.find(in.substr(i, 1)) == number.end())
		{
			cout << "�����̒l����͂��Ă��������B" << endl;
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
	cout << "�ϊ�����:" << out << endl;
	return 0;
}