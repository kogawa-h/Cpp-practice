#ifndef _B_H_
#define _B_H_

class A;    //  �N���XA�ւ̎Q��

class B {
private:
	A * m_pA;
public:
	B(A* pA);
	void hoge();
};

#endif // _B_H_