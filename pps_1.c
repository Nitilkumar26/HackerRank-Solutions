#include<stdio.h>
int main() {
    int day; // 1- mon; 2- tues; 3- web;
    printf("enter day (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1 : printf("Monday\n")
        case 2 : printf("Tuesday\n")
        case 3 : printf("Webnesday\n")
        case 4 : printf("Thursday\n")

    }

    return 0;
}