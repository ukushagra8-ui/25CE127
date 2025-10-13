#include <stdio.h>
#include <string.h>


void bookname(int *n, char name[][50], int status[]) {
    printf("\nCurrent Book Status:\n");
    for(int i = 0; i < *n; i++) {
        printf("Book %d: %s - %s\n", i+1, name[i], status[i] ? "Borrowed" : "Available");
    }
}


void borrow(int *n, char borrowed[], char name[][50], int status[]) {
    int found = 0;
    for(int i = 0; i < *n; i++) {
        if(strcmp(borrowed, name[i]) == 0) {
            found = 1;
            if(status[i] == 1) {
                printf("Sorry! '%s' is already borrowed.\n", name[i]);
            } else {
                status[i] = 1;
                printf("You have borrowed '%s'.\n", name[i]);
            }
            break;
        }
    }
    if(!found) {
        printf("Book '%s' not found in the library.\n", borrowed);
    }
}


int calculateFine(int lateDays) {
    if(lateDays <= 0)
        return 0; 
    return lateDays * 5; 
}

int main() {
    int number;
    char name[10][50];
    char borrowed[50];
    int status[10] = {0}; 

    printf("Enter total number of books: ");
    scanf("%d", &number);

    for(int i = 0; i < number; i++) {
        printf("Enter book name number %d: ", i+1);
        scanf(" %[^\n]", name[i]);
    }

    bookname(&number, name, status);

    while(1) {
        int enter;
        printf("\nEnter 0 to exit, or any other number to continue: ");
        scanf("%d", &enter);
        if(enter == 0) break;

        printf("Enter the book you want to borrow: ");
        scanf(" %[^\n]", borrowed);

        borrow(&number, borrowed, name, status);
        bookname(&number, name, status);

        
        int late;
        printf("Enter number of late days for '%s': ", borrowed);
        scanf("%d", &late);

        int fine = calculateFine(late);
        if(fine == 0)
            printf("No fine. Thank you!\n");
        else
            printf("Your fine is: %d Rs\n", fine);
    }

    return 0;
}
