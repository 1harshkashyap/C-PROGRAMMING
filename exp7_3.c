#include <stdio.h>
struct Book {
    int book_id;
    char title[100];
    char author[100];
    float price;
};
void displayBook(struct Book b);
int main() {
    struct Book b1;
    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);
    printf("Enter Title: ");
    scanf(" %[^\n]", b1.title);
    printf("Enter Author Name: ");
    scanf(" %[^\n]", b1.author);
    printf("Enter Price: ");
    scanf("%f", &b1.price);
    displayBook(b1);
    return 0;
}
void displayBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}
