#include <stdio.h>
#include "product_management.h"
#include "user_management.h"

int main() {
    int choice;
    printf("Welcome:\n");

    while (1) {
        printf("1. Manage Product (staff)\n");
        printf("2. Manage User\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                productStaffMenu();
                break;
            case 2:
                staffMenu();
            case 3:
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
