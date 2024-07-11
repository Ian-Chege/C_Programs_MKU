// switch statement format 1 to evalute student's grades

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

// switch statement format 2 to evalute student's grades

#include <stdio.h>

int main()
{
    int a, b, c, d, e, marks;
    printf("Enter your grades: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    marks = (a + b + c + d + e) / 5;
    printf("Average marks: %d\n", marks);

    switch (marks)
    {
    case 70 ... 100:
        printf("A\n");
        break;
    case 60 ... 69:
        printf("B\n");
        break;
    case 50 ... 59:
        printf("C\n");
        break;
    case 40 ... 49:
        printf("D\n");
        break;
    default:
        printf("Fail\n");
    }

    return 0;
}

// switch statement to evalute 1st character of color

#include <stdio.h>

int main()
{
    char color;
    printf("Enter the first chracter of your color: ");
    scanf("%c", &color);

    switch (color)
    {
    case 'b':
    case 'B':
        printf("Blue\n");
        break;
    case 'o':
    case 'O':
        printf("Orange\n");
        break;
    default:
        printf("Invalid\n");
    }

    return 0;
}