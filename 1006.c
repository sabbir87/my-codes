#include<stdio.h>
int main()
{
    double A , B , C, MEDIA;
        scanf("%1f%1f%1f",&A, &B, &C);
        A = A * 2;
        B = B * 3;
        C = C * 5;
        MEDIA = (A + B + C) / 10;
        printf("MEDIA = %0.11f\n", MEDIA);
        return 0;

}
