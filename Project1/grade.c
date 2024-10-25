#include <stdio.h>
#include <string.h>
#include "grade_funcs.h"

#define student 10
float average_set = 0.0;

main(void) {
	int grade[student] = {85, 70, 55, 90, 45, 60, 78, 88, 92, 49};
	
	calculate_average(grade, student);
	find_min_max(grade, student);
	printf("\n");
	above_below(grade, student);
	count_pass_fail(grade, student);

	getch();
	return 0;
}
