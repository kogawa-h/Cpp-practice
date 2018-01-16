
#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main(void)
{
	vector<string> v1,maxLen,minLen;
	string i;
	int max,min;

	while (true){
		cout << "•¶Žš—ñ‚ð“ü—Í:";
		getline(cin, i);
		if (i == "")break;
		v1.push_back(i);
	}
	max= v1.begin()->length();
	min= v1.begin()->length();
	for (vector<string>::iterator x = v1.begin(); x != v1.end(); x++)	{
		if (max < x->length())max = x->length();
		if (min > x->length())min = x->length();
	}
	for (vector<string>::iterator x = v1.begin(); x != v1.end(); x++){	
		if (x->length() == max)maxLen.push_back(*x);
		if (x->length() == min)minLen.push_back(*x);
	}
	cout << "Å’·‚Ì’PŒê:";
	for (vector<string>::iterator x = maxLen.begin(); x != maxLen.end(); x++)cout << *x << " ";
	cout << endl;
	cout << "Å’Z‚Ì’PŒê:";
	for (vector<string>::iterator x = minLen.begin(); x != minLen.end(); x++)cout << *x << " ";
	cout << endl;
	return 0;
}