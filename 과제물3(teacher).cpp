#include <iostream>
using namespace std;

const int CLASS = 3;
const int SUB_NUM = 3;
const int STUDENT_NUM = 10;

void main() {
	char Name[SUB_NUM][STUDENT_NUM] = { "국어", "영어", "수학" };

	double scores[CLASS][SUB_NUM][STUDENT_NUM] = 
	{ {{ 10, 20, 30, 40, 50,60, 70,80,93,100 },{ 15, 22, 37, 34, 87,63, 78,23,88,100 },{ 17, 22, 36, 49, 52,40, 77,82,99,100 }},
	{ { 10, 20, 30, 40, 50,60, 70,80,93,100 },{ 15, 22, 37, 34, 87,63, 78,23,88,100 },{ 17, 22, 36, 49, 52,40, 77,82,99,100 } }, 
	{ { 10, 20, 30, 40, 50,60, 70,80,93,100 },{ 15, 22, 37, 34, 87,63, 78,23,88,100 },{ 17, 22, 36, 49, 52,40, 77,82,99,100 }} };

	//반별/과목별 평균
	for (int cls = 0;cls < CLASS;cls++) {
		for (int subj = 0;subj < SUB_NUM;subj++) {
			double sum = 0.0;
			for (int student = 0;student < STUDENT_NUM;student++) {
				sum += scores[cls][subj][student];
			}
			double avg = sum / STUDENT_NUM;
			cout << cls + 1 << "반 " << Name[subj] << " 평균 = " << avg << endl;
		}
	}

	//과목별 전체 평균
	for (int subj = 0;subj < SUB_NUM;subj++) {
		double sum = 0; //해당 과목의 전체 성적 합(모든 반, 학생 성적의 합계)
		for (int cls = 0;cls < CLASS;cls++) {
			for (int student = 0;student < STUDENT_NUM;student++) {
				sum += scores[cls][subj][student];
			}
		}
		double avg = sum / (CLASS*STUDENT_NUM);
		cout << Name[subj] << " 평균 = " << avg << endl;
	}

}