#include <iostream>
#include <ctime>
#include <string>
using namespace std;

//과제물 1의 코드를 활용했습니다.

const int SUBJECT_NUM = 3;
const int STUDENT_NUM = 10;

int main() {
	int scoreList[SUBJECT_NUM][STUDENT_NUM];
	string subjectList[SUBJECT_NUM] = { "Langage", "English","Math" };

	srand(time(0));

	double sum[SUBJECT_NUM] = { 0 };

	for (int i = 0;i<SUBJECT_NUM;i++) {
		for (int j = 0;j<STUDENT_NUM;j++) {
			scoreList[i][j] = rand() % 101;
			sum[i] += scoreList[i][j];
		}
	}

	for (int i = 0;i<SUBJECT_NUM;i++) {
		cout << "The Average of " << subjectList[i] << " is ";
		printf("%.1f\n", sum[i] / STUDENT_NUM);
	}

	double studentSum[STUDENT_NUM] = { 0 };

	for (int j = 0;j < STUDENT_NUM;j++) {
		for (int i = 0;i < SUBJECT_NUM;i++) {
			studentSum[j] += scoreList[i][j];
		}
	}

	cout << "Followings are Student average:" << endl;

	for (int i = 0;i < STUDENT_NUM;i++) {
		printf("%d : %.1f\n", i + 1, studentSum[i] / 3);
	}


	return 0;
}