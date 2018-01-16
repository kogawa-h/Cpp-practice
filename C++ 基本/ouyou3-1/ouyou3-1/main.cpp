#include <iostream>
#include <string>

using namespace std;

template<typename T>
T max(T x, T y) {
	if (x > y) {
		return x;
	}
	return y;
}
int main() {
	cout << max(1, 2) << endl;
	cout << max(1.75, 3.12) << endl;
	string s1 = "aiu", s2 = "eo";
	cout << max<string>(s1, s2) << endl;
	return 0;
}
