// switch statement to evalute student's grades

#include <stdio.h>

int main()
{
    int a, b, c, d, e, marks;
    printf("Enter your grades: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    marks = (a + b + c + d + e) / 5;
    printf("Average marks: %d\n", marks);

    switch (marks / 10)
    {
    case (10):
    case (9):
    case (8):
    case (7):
        printf("A\n");
        break;
    case (6):
        printf("B\n");
        break;
    case (5):
        printf("C\n");
        break;
    case (4):
        printf("D\n");
        break;
    default:
        printf("Fail\n");
    }

    return 0;
}
