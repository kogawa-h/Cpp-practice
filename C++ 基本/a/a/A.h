#ifndef _A_H_
#define _A_H_

class B;    //  �N���XB�ւ̎Q��

class A {
private:
	B * m_pB;
public:
	A();    //  �R���X�g���N�^
	void foo();
	void bar();
};

#endif // _A_H_