#include<stdio.h>
void main(){
    /*
        1.int:- 2 or 4 bytes[Stores whole numbers, without decimals].
        2.float:- 4 bytes[Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits].
        3.double:- 8 bytes[Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits].
        4.char:- 1 byte[Stores a single character/letter/number, or ASCII values].

        Basic Format Specifiers:-

        1.%d:- int value
        2.%f:- float value
        3.%lf:- double value
        4.%c:- character value
        5.%s:- string text
    */
    
    int age=21;
    float percentage=87.5;
    double bmi=19.24;
    char firstLetter='s';
    char name[]="Sanidhya Varshney";
    printf("%d\n",age);
    printf("%f\n",percentage);
    printf("%lf\n",bmi);
    printf("%c\n",firstLetter);
    printf("%s",name);

}