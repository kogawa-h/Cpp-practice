
#include<iostream>
#include<string>
#include<list>


using namespace std;

int main(void)
{
	list<string> v1;
	string i;


	while (true) {
		cout << "文字列を入力:";
		getline(cin, i);
		if (i == "")break;
		v1.push_back(i);
	}

	cout << "5文字未満の単語:";
	for (list<string>::iterator x = v1.begin(); x != v1.end(); x++){
		if (x->length()>= 5)v1.remove(*x);
		else {
			cout << *x << " ";
		}
	}
	cout << endl;
	
	return 0;
}