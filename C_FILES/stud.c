#include <stdio.h>
const int students = 3;
const int sbjects = 5;
int main(){
int marks[students][sbjects];
int i,j;
// Using nested loop to store values in a 2d array
for (i = 0; i < students; ++i) {
for ( j = 0; j < sbjects; ++j)
{
printf("Student %d, Subject %d: ", i + 1, j + 1);
scanf("%d", &marks[i][j]);
}
}
printf("\nDisplaying marks: \n\n");
// Using nested loop to display vlues of a 2d array
for ( i = 0; i < students; ++i)
{
for (j = 0; j < sbjects; ++j)
{
printf("Student %d, Subject %d = %d\n", i + 1, j + 1, marks[i][j]);
}
}
return 0;
}
