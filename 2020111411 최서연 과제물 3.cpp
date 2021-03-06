#include <iostream>
#include <ctime>
#include <string>
using namespace std;

const int CLASS_NUM = 3;
const int SUBJECT_NUM = 3;
const int STUDENT_NUM = 10;

int main() {
	string subjectList[SUBJECT_NUM] = { "Langage", "English", "Math" };
	double scoreList[CLASS_NUM][SUBJECT_NUM][STUDENT_NUM];
	double classScoreSum[CLASS_NUM][SUBJECT_NUM] = { 0 };
	double subjectScoreSum[SUBJECT_NUM] = { 0 };

	srand(time(0));

	for (int Class = 0; Class < CLASS_NUM;Class++) {
		for (int sub = 0;sub < SUBJECT_NUM;sub++) {
			for (int stu = 0;stu < STUDENT_NUM;stu++) {
				scoreList[Class][sub][stu] = rand() % 101;
				classScoreSum[Class][sub] += scoreList[Class][sub][stu];
				subjectScoreSum[sub] += scoreList[Class][sub][stu];
			}
		}
	}

	cout << "Followings are Average by Class & Subjects:" << endl;

	for (int i = 0;i < CLASS_NUM;i++) {
		for (int j = 0;j < SUBJECT_NUM;j++) {
			cout << "Class " << i + 1 << " - " << subjectList[j] << ": ";
			printf("%.1f\n", classScoreSum[i][j] / STUDENT_NUM);
		}
	}

	cout << "\nFollowings are Average by Subjects: " << endl;
	
	for (int i = 0;i < SUBJECT_NUM;i++) {
		cout << subjectList[i] << ": ";
		printf("%.1f\n", subjectScoreSum[i] / (STUDENT_NUM*CLASS_NUM));
	}

	return 0;
}