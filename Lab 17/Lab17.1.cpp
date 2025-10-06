#include <stdio.h>
#include <string.h>


typedef struct {
    int bookID;
    char title[100];
    char author[100];
    int year;
} Book;

void addBook(Book books[], int *count);
void searchBook(Book books[], int count, char title[]);
void displayBooks(Book books[], int count);

int main() {
    Book books[100];
    int count = 0;
    int choice;
    char searchTitle[100];

    while (1)
    {
        printf("\n--- Library Management System---\n");
        printf("1. Add new book\n");
        printf("2. Search book by title\n");
        printf("3. Display all books\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar();
            switch (choice)
        {
            case 1:
            addBook(books, &count);
            break;
            case 2:
            printf("Enter Title to Search: ");
            fgets(searchTitle, sizeof(searchTitle), stdin);
            searchTitle[strcspn(searchTitle, "\n")] = '0';
            searchBook(books, count, searchTitle);
            break;
            case 3:
            displayBooks(books, count);
            break;
            case 4:
            printf("Exiting program...\n");
            return 0;
            default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}

void addBook(Book books[], int *count) {
    printf("Enter Book ID: ");
    scanf("%d", &books[*count].bookID);
    getchar();

    printf("Enter Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = '\0';

    printf("Enter Year: ");
    scanf("%d", &books[*count].year);

    (*count)++;
    printf("Book added successfully!\n");

}

void searchBook(Book books[], int count, char title[]) {
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0){
            printf("Book ID: %d\n", books[i].bookID);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].year);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void displayBooks(Book books[], int count) {
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("Book ID: %d\n", books[i].bookID);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n\n", books[i].year);
    }
}





