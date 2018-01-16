#include<iostream>
#include<random>
#include<set>

using namespace std;

int main(void)
{
	random_device rnd;
    set<int> set;
    cout << "乱数:";
	for (int i = 0; i < 10; i++)
	{
		int random = rnd() % 10 + 1;
		set.insert(random);
		cout << " " << random;
	}
	cout << endl;
	cout << "出現した数:";

	for (std::set<int>::iterator i = set.begin(); i != set.end(); i++) {
		cout << " " << *i;
	}
	cout << endl;
	return 0;
}