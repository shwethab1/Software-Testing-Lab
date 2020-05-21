#include <stdio.h>
main()
{
    float fs, cncl, st, os, op, pap, avmar;
    printf("Letter Grading\n");
    printf("VTU Marks Grading\n");
    printf("Enter the marks for File Structure:");
    scanf("%f", &fs);
    printf("enter the marks for Cryptography:");
    scanf("%f", &cncl);
    printf("enter the marks for Software Testing:");
    scanf("%f", &st);
    printf("enter the marks for Operating System:");
    scanf("%f", &os);
    printf("enter the marks for Operations Research:");
    scanf("%f", &op);
    printf("enter the marks for Python:");
    scanf("%f", &pap);
    avmar = (fs + cncl + st + os + op + pap) / 6.25;
    printf("the average marks are=%f\n", avmar);
    if ((avmar < 40) && (avmar > 0))
        printf("fail");
    else if ((avmar <= 50) && (avmar > 40))
        printf("Grade E");
    else if ((avmar <= 60) && (avmar > 50))
        printf("Grade D");
    else if ((avmar <= 70) && (avmar > 60))
        printf("Grade C");
    else if ((avmar <= 80) && (avmar > 70))
        printf("Grade B");
    else if ((avmar <= 90) && (avmar > 80))
        printf("Grade A");
    else if ((avmar <= 100) && (avmar > 90))
        printf("Grade S");
}
