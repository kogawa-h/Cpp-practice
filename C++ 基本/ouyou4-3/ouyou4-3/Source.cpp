#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	vector<int> v[10];

	int i = 0;
	while (true)
	{
		cout << "³‚Ì®”‚ð“ü—Í:";
		cin >> i;
		if (i == -1)break;
		for (int j = 0; j < 10; j++) {
			if (i % 10 == j) {
				v[j].push_back(i);
			}
		}
	}
			for (int x = 0; x < 10; x++) {
				cout << "ˆê‚ÌˆÊ‚ª" << x << ":";
				if (v[x].size() == 0)cout << "‚È‚µ";
				else for (vector<int>::iterator y = v[x].begin(); y != v[x].end(); y++) {
					cout << *y << " ";
				}
				cout << endl;
		}
	

	return 0;
}