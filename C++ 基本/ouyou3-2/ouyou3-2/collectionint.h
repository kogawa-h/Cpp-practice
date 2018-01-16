#ifndef _COLLECTIONINT_H_
#define _COLLECTIONINT_H_

template<typename T>class CollectionInt {
private:
	//  �z��f�[�^
	T * m_pArray;
	//  �z��̒���
	int m_length;
public:
	//  �R���X�g���N�^
	CollectionInt(T * array, T length) {
		m_pArray = new T[length];
		m_length = length;
        for (int i = 0; i < m_length; i++)m_pArray[i] = array[i];
	 }

	//  �f�X�g���N�^
	~CollectionInt() {
		{
	delete[]m_pArray;
		}
	}
	//  �ő�l�̎擾
	T getMax() {
		T max = m_pArray[0];
		for (int i = 0; i < m_length; i++) {
			if (max < m_pArray[i]) {
				max = m_pArray[i];
			}
		}
		return max;
	}
	//  �ŏ��l�̎擾
	T getMin() {
		T min = m_pArray[0];
		for (int i = 0; i < m_length; i++) {
			if (min > m_pArray[i]) {
				min = m_pArray[i];
			}
		}
		return min;
	}
	//  �����̕\��
	void showArray() {
		for (int i = 0; i < m_length; i++) {
			cout << m_pArray[i] << " ";
		}
		cout << endl;
	}
};

#endif // _COLLECTIONINT_H_