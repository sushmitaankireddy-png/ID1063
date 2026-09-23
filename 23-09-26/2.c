#include <stdio.h>

int daysElapsed(int day, int month) {
    int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = day;
    
    for (int i = 0; i < month - 1; i++) {
        total_days += days_in_months[i];
    }
    
    return total_days;
}

int main() {
    int day,month;
    // Test case from the problem: day = 1, month = 2
    printf("enter the day and month:");
    scanf("%d %d", day, month);

    printf("Output: %d\n", daysElapsed(day, month));
    
    return 0;
}

