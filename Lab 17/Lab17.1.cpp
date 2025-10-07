#include <stdio.h>
#include <string.h>

// Structure สำหรับเก็บข้อมูลหนังสือ
typedef struct {
    int bookID;
    char title[100];
    char author[100];
    int year;
} Book;

// Function prototypes
void addBook(Book books[], int *count, int maxBooks);
void searchBook(Book books[], int count, char title[]);
void displayBooks(Book books[], int count);

int main() {
    int maxBooks = 100; // กำหนดขนาด array โดยตรง
    Book books[maxBooks];
    int count = 0; // จำนวนหนังสือที่มีอยู่
    int choice;
    char searchTitle[100];

    do {
        printf("\n=== Library Menu ===\n");
        printf("1. Add a new book\n");
        printf("2. Search a book by title\n");
        printf("3. Display all books\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                addBook(books, &count, maxBooks);
                break;
            case 2:
                printf("Enter Title to Search: ");
                fgets(searchTitle, sizeof(searchTitle), stdin);
                searchTitle[strcspn(searchTitle, "\n")] = 0;
                searchBook(books, count, searchTitle);
                break;
            case 3:
                displayBooks(books, count);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid option. Try again.\n");
        }
    } while(choice != 4);

    return 0;
}

void addBook(Book books[], int *count, int maxBooks) {
    if(*count >= maxBooks) {
        printf("Library is full!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &books[*count].bookID);
    getchar();

    printf("Enter Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = 0;

    printf("Enter Author: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = 0;

    printf("Enter Year: ");
    scanf("%d", &books[*count].year);
    getchar();

    (*count)++;
    printf("Book added successfully!\n");
}

void searchBook(Book books[], int count, char title[]) {
    int found = 0;
    for(int i = 0; i < count; i++) {
        if(strcmp(books[i].title, title) == 0) {
            printf("Book ID: %d\n", books[i].bookID);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Book not found.\n");
    }
}

void displayBooks(Book books[], int count) {
    if(count == 0) {
        printf("No books in library.\n");
        return;
    }
    for(int i = 0; i < count; i++) {
        printf("Book ID: %d\n", books[i].bookID);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n\n", books[i].year);
    }
}
