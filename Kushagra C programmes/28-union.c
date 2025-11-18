#include <stdio.h>
#include <string.h>

union BookInput {
    int accession_number;
    char title[50];
    char author[50];
    float price;
    int issued;
} book;

int main() {
    int id;
    char title[50], author[50];
    float price;
    int issued;

    printf("Enter accession number: ");
    scanf("%d", &book.accession_number);
    id = book.accession_number;

    getchar(); 

    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = '\0';
    strcpy(title, book.title);

    printf("Enter author name: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = '\0';
    strcpy(author, book.author);

    printf("Enter book price: ");
    scanf("%f", &book.price);
    price = book.price;

    printf("Is the book issued? (1 for Yes & 0 for No): ");
    scanf("%d", &book.issued);
    issued = book.issued;

    printf("\nBook Details:\n");
    printf("Accession Number: %d\n", id);
    printf("Title: %s\n", title);
    printf("Author: %s\n", author);
    printf("Price: %.2f\n", price);
    printf("Availability: %s\n", issued ? "Issued" : "Not Issued");

    printf("\nName: Kushagra Upadhyay\nDepartment: CSPIT CE\nStudent ID: 25CE0127\n");
    return 0;

}
