#include <iostream>
using namespace std;

const int CLASS = 3;
const int SUB_NUM = 3;
const int STUDENT_NUM = 10;

void main() {
	char Name[SUB_NUM][STUDENT_NUM] = { "����", "����", "����" };

	double scores[CLASS][SUB_NUM][STUDENT_NUM] = 
	{ {{ 10, 20, 30, 40, 50,60, 70,80,93,100 },{ 15, 22, 37, 34, 87,63, 78,23,88,100 },{ 17, 22, 36, 49, 52,40, 77,82,99,100 }},
	{ { 10, 20, 30, 40, 50,60, 70,80,93,100 },{ 15, 22, 37, 34, 87,63, 78,23,88,100 },{ 17, 22, 36, 49, 52,40, 77,82,99,100 } }, 
	{ { 10, 20, 30, 40, 50,60, 70,80,93,100 },{ 15, 22, 37, 34, 87,63, 78,23,88,100 },{ 17, 22, 36, 49, 52,40, 77,82,99,100 }} };

	//�ݺ�/���� ���
	for (int cls = 0;cls < CLASS;cls++) {
		for (int subj = 0;subj < SUB_NUM;subj++) {
			double sum = 0.0;
			for (int student = 0;student < STUDENT_NUM;student++) {
				sum += scores[cls][subj][student];
			}
			double avg = sum / STUDENT_NUM;
			cout << cls + 1 << "�� " << Name[subj] << " ��� = " << avg << endl;
		}
	}

	//���� ��ü ���
	for (int subj = 0;subj < SUB_NUM;subj++) {
		double sum = 0; //�ش� ������ ��ü ���� ��(��� ��, �л� ������ �հ�)
		for (int cls = 0;cls < CLASS;cls++) {
			for (int student = 0;student < STUDENT_NUM;student++) {
				sum += scores[cls][subj][student];
			}
		}
		double avg = sum / (CLASS*STUDENT_NUM);
		cout << Name[subj] << " ��� = " << avg << endl;
	}

}