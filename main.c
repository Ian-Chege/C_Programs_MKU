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

// while loop example
#include <stdio.h>
int main()
{
    int i;
    printf("Enter the value of i\n");
    scanf("%d", &i);
    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// program to display even numbers between 50 to 80 using while loop
#include <stdio.h>
int main()
{
    int i = 50;
    while (i <= 80)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}

// program to display numbers between 0 to 100 that are divisible by 3 using while loop
#include <stdio.h>
int main()
{
    int i = 0;
    while (i <= 100)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}

// program to display numbers between 0 to 10 using do...while loop
#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    return 0;
}