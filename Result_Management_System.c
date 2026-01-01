#include <stdio.h>

int main() {
    int students, subjects;

    printf("Enter number of students: ");
    scanf("%d", &students);

    printf("Enter number of subjects: ");
    scanf("%d", &subjects);

    int marks[50][10];
    int total[50];
    float percentage[50];

    for (int i = 0; i < students; i++) {
        total[i] = 0;
        printf("\nStudent %d\n", i + 1);

        for (int j = 0; j < subjects; j++) {
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }

        percentage[i] = (float)total[i] / subjects;
    }

    for (int i = 0; i < students; i++) {
        printf("\nStudent %d Total: %d Percentage: %.2f%%",
               i + 1, total[i], percentage[i]);
    }

    int classTopper = 0;
    for (int i = 1; i < students; i++) {
        if (total[i] > total[classTopper])
            classTopper = i;
    }

    printf("\n\nClass Topper: Student %d\n", classTopper + 1);

    for (int j = 0; j < subjects; j++) {
        int subjectTopper = 0;

        for (int i = 1; i < students; i++) {
            if (marks[i][j] > marks[subjectTopper][j])
                subjectTopper = i;
        }

        printf("Subject %d Topper: Student %d\n", j + 1, subjectTopper + 1);
    }

    return 0;
}
