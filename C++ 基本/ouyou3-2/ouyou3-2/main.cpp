#include <iostream>
#include "collectionint.h"

using namespace std;

int main() {
	//  �z��ϐ��̒�`
	double array[] = { 1.2 ,3.5, 8.1 ,4.9 ,2.0, 2.2 };
	CollectionInt<double>* c = new CollectionInt<double>(array, 5);
	c->showArray();
	cout << "�ő�l : " << c->getMax() << endl;
	cout << "�ŏ��l : " << c->getMin() << endl;
	delete c;
	return 0;
}