#include <iostream>
#include <ctime>
#include <string>
using namespace std;

const int SUBJECT_NUM = 1;
const int STUDENT_NUM = 10;

int main() {
	int scoreList[SUBJECT_NUM][STUDENT_NUM];

	srand(time(0));

	int sum[SUBJECT_NUM] = {0};

	for(int i=0;i<SUBJECT_NUM;i++){
		for(int j = 0;j<STUDENT_NUM;j++){
			scoreList[i][j] = rand()%101;
			sum[i] += scoreList[i][j];
			cout << scoreList[i][j];
		}
	}

	for(int i =0;i<SUBJECT_NUM;i++){
		printf("The Average is %.1f\n", sum[i]/STUDENT_NUM);
	}


	return 0;
}