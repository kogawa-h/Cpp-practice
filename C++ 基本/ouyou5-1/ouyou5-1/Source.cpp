#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	map<string, string> names;

	names["cat"] = "猫";
	names["dog"] = "犬";
	names["bird"] = "鳥";
	names["tiger"] = "トラ";

	//  登録されている全データを表示
	map<string, string>::iterator i;
	string a;
	cout << "英語で動物の名前を入力してください:";
	cin >> a;
	i = names.find(a);
	if (i == names.end()) {
	cout << " 対応するデータは登録されていません。" << endl;
}
	else {
		cout << "「" << i->second << "」です。" << endl;
	}
	return 0;
}