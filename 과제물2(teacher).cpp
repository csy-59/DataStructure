#include <iostream>
using namespace std;

//c스타일
//#define SUB_NUM 3
//#define STUDENT_NUM 10

//c++스타일
const int SUB_NUM = 3;
const int STUDENT_NUM = 10;

void main() {
	int scores[SUB_NUM][STUDENT_NUM] = { {10, 20, 30, 40, 50,60, 70,80,93,100}, 
	{ 15, 22, 37, 34, 87,63, 78,23,88,100 }, 
	{ 17, 22, 36, 49, 52,40, 77,82,99,100 } };

	//과목별 평균
	for (int subj = 0;subj < SUB_NUM;subj++) {//과목
		int sum = 0;
		for (int student = 0;student < STUDENT_NUM;student++)//학생
			sum += scores[subj][student];

		double avr = (double)sum /STUDENT_NUM;
		cout << subj + 1 << "번째 과목 평균 = " << avr << endl;
	}

	//개인별 평균을 구하자
	for (int student = 0;student < STUDENT_NUM;student++) {
		int sum = 0;
		for (int subj = 0;subj < SUB_NUM;subj++)
			sum += scores[subj][student];
		double avr = (double)sum / SUB_NUM;
		cout << student + 1 << "번째 학생의 평균 = " << avr << endl;
	}


}