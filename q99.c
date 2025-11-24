#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // ✅ required for atoi()

int main() {
    char date[11];
    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);

    // Remove newline character from fgets
    date[strcspn(date, "\n")] = 0;

    // Separate day, month, year
    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Month names array
    char *month_names[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                           "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    int month_index = atoi(month) - 1;

    // Validate month index
    if (month_index < 0 || month_index > 11) {
        printf("Invalid month entered!\n");
        return 1;
    }

    // Final formatted date
    printf("New date format: %s-%s-%s\n", day, month_names[month_index], year);

    return 0;
}
