#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	vector<int> v[10];

	int i = 0;
	while (true)
	{
		cout << "正の整数を入力:";
		cin >> i;
		if (i == -1)break;
		for (int j = 0; j < 10; j++) {
			if (i % 10 == j) {
				v[j].push_back(i);
			}
		}
	}
			for (int x = 0; x < 10; x++) {
				cout << "一の位が" << x << ":";
				if (v[x].size() == 0)cout << "なし";
				else for (vector<int>::iterator y = v[x].begin(); y != v[x].end(); y++) {
					cout << *y << " ";
				}
				cout << endl;
		}
	

	return 0;
}