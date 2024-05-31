/*
3 -Write a C program to calculate difference between two time periods

Input
Read a start time from user in (HH:MM:SS)
Read a stop time from user in (HH:MM:SS)
Note :
You should store all the information inside the structure only.

Output
Calculate the time difference between the start and stop time and print it.

Sample execution
Test case 1
Sample input
Enter the start time.
Enter hours, minutes and seconds : 13 34 55
Enter the stop time
Enter the hours, minutes and seconds : 8 12 15
Sample output
Time Difference : 13:34:55 - 8:12:15 = 5:22:40
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int hours;
    int minutes;
    int seconds;
} Time;

typedef struct
{
    int hours_diff;
    int minutes_diff;
    int seconds_diff;
} Time_Difference;

int main(void)
{
    Time start_time, stop_time;
    Time_Difference time_diff;

    printf("Enter the start time \n");
    printf("Enter hours, minutes and seconds : \n");
    scanf("%d%d%d", &start_time.hours, &start_time.minutes, &start_time.seconds);

    printf("Enter the stop time \n");
    printf("Enter hours, minutes and seconds : \n");
    scanf("%d%d%d", &stop_time.hours, &stop_time.minutes, &stop_time.seconds);

    time_diff.hours_diff = abs(stop_time.hours - start_time.hours);
    time_diff.minutes_diff = abs(stop_time.minutes - start_time.minutes);
    time_diff.seconds_diff = abs(stop_time.seconds - start_time.seconds);

    printf(" Time Difference : %d %d %d\n", time_diff.hours_diff, time_diff.minutes_diff, time_diff.seconds_diff);

    return 0;
}
