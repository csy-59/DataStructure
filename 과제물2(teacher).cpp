#include <iostream>
using namespace std;

//c��Ÿ��
//#define SUB_NUM 3
//#define STUDENT_NUM 10

//c++��Ÿ��
const int SUB_NUM = 3;
const int STUDENT_NUM = 10;

void main() {
	int scores[SUB_NUM][STUDENT_NUM] = { {10, 20, 30, 40, 50,60, 70,80,93,100}, 
	{ 15, 22, 37, 34, 87,63, 78,23,88,100 }, 
	{ 17, 22, 36, 49, 52,40, 77,82,99,100 } };

	//���� ���
	for (int subj = 0;subj < SUB_NUM;subj++) {//����
		int sum = 0;
		for (int student = 0;student < STUDENT_NUM;student++)//�л�
			sum += scores[subj][student];

		double avr = (double)sum /STUDENT_NUM;
		cout << subj + 1 << "��° ���� ��� = " << avr << endl;
	}

	//���κ� ����� ������
	for (int student = 0;student < STUDENT_NUM;student++) {
		int sum = 0;
		for (int subj = 0;subj < SUB_NUM;subj++)
			sum += scores[subj][student];
		double avr = (double)sum / SUB_NUM;
		cout << student + 1 << "��° �л��� ��� = " << avr << endl;
	}


}