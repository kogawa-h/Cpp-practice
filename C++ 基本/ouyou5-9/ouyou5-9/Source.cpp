#include<iostream>
#include<list>
#include<map>
#include<string>


using namespace std;

int main(void)
{
	list<int> shiritoriList;
    list<int>::iterator begin;
	list<int>::iterator end;
	map<int, int> shiritori;
	map<int, int> reverse;
	string words[] =
	{
		"room",
		"wonderful",
		"pork",
		"trap",
		"kind",
		"money",
		"dog",
		"given",
		"yellow",
		"eat",
		"apple",
		"neighbor",
	};
	for (int i = 0; i < sizeof(words) / sizeof(string); i++) {
		for (int j = 0; j < sizeof(words) / sizeof(string); j++) {
			if (*(words[i].end() - 1) == *(words[j].begin())) {
				shiritori[i] = j;
			}
		}
	}
	for (int i = 0; i < sizeof(words) / sizeof(string); i++) {
		for (int j = 0; j < sizeof(words) / sizeof(string); j++) {
			if (*(words[i].begin()) == *(words[j].end() - 1)) {
				reverse[i] = j;
			}
		}
	}
		shiritoriList.insert(shiritoriList.begin(), 0);
	begin = shiritoriList.begin();
	while (reverse.find(*begin) != reverse.end())
	{
	shiritoriList.insert(begin, reverse[*begin]);
	begin = shiritoriList.begin();
	}
	end = shiritoriList.end();
	end--;
	while (shiritori.find(*end) != shiritori.end())
	{	shiritoriList.insert(shiritoriList.end(), shiritori[*end]);
		end = shiritoriList.end();
		end--;
	}
	for (list<int>::iterator i = shiritoriList.begin(); i != shiritoriList.end(); i++) {
		cout << words[*i] << endl;
	}
	return 0;
}