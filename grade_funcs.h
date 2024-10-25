#pragma once
extern float average_set;

int calculate_average(int grade[], int student) {

	for (int i = 0; i < student; i++) {
		average_set = average_set + grade[i];
	}
	average_set = average_set / student;
	printf("Average grade : %.1f\n", average_set);

}

int find_min_max(int grade[], int student) {
	int check_min;
	int check_max;
	check_min = grade[0];
	check_max = grade[0];

	for (int j = 1; j < student; j++) {
		
		for (int stu = 0; stu < student - 1; stu++) {
			if (check_min > grade[stu]) check_min = grade[stu];
			if (check_max < grade[stu]) check_max = grade[stu];
		}
	}

	printf("Highest grade : %d\n", check_max);
	printf("Lowest grade : %d\n", check_min);

}

int above_below(int grade[], int student) {
	printf("Grades above average : ");
	for (int k = 0; k < student; k++) {
		if (average_set < (float)grade[k]) {
			printf("%d ", grade[k]);
		}

	}

	printf("\nGrades below average : ");
	for (int k = 0; k < student; k++) {
		if (average_set > (float)grade[k]) {
			printf("%d ", grade[k]);
		}

	}
}


int count_pass_fail(int grade[], int student) {
	int passing = 0, failing = 0;

	for (int k = 0; k < student; k++) {
		if (grade[k]>=60) passing++;
		else failing++;

	}

	printf("\n\nNumber of students passing : %d", passing);
	printf("\nNumber of students failing : %d", failing);
	
}
