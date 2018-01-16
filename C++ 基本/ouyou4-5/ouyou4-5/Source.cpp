#include<iostream>
#include<list>

using namespace std;

int main(void)
{
	std::list <int> v1;
	int i;
	while (true)
	{
        cout << "³‚Ì®”‚ð“ü—Í:";
		cin >> i;
		if (i== -1)break;
		v1.push_back(i);

	}
	v1.remove(2);
	for (list<int>::iterator x = v1.begin(); x != v1.end(); x++) cout << *x << " " << endl;
	return 0;

}

