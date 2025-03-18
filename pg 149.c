#include <stdio.h>
struct Book {
    char title[100];
    char author[100];
    char subject[100];
    int book_id;
};

int main() {   
    struct Book *ptr, b;    
    ptr = &b;    
    printf("Enter the book title: ");
    scanf(" %[^\n]", ptr->title);       
    printf("Enter the author: ");
    scanf(" %[^\n]", ptr->author);      
    printf("Enter the subject: ");
    scanf(" %[^\n]", ptr->subject);     
    printf("Enter the book ID: ");
    scanf("%d", &ptr->book_id); 
	     
    printf("\nBook Information:\n");
    printf("Title: %s\n", ptr->title);
    printf("Author: %s\n", ptr->author);
    printf("Subject: %s\n", ptr->subject);
    printf("Book ID: %d\n", ptr->book_id);

    return 0;
}
