#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	map<string, string> names;

	names["cat"] = "�L";
	names["dog"] = "��";
	names["bird"] = "��";
	names["tiger"] = "�g��";

	//  �o�^����Ă���S�f�[�^��\��
	map<string, string>::iterator i;
	string a;
	cout << "�p��œ����̖��O����͂��Ă�������:";
	cin >> a;
	i = names.find(a);
	if (i == names.end()) {
	cout << " �Ή�����f�[�^�͓o�^����Ă��܂���B" << endl;
}
	else {
		cout << "�u" << i->second << "�v�ł��B" << endl;
	}
	return 0;
}