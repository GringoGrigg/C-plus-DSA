#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    char name[50];
    char phone[20];
} Entry;

Entry phonebook[MAX];
int num_entries = 0;

void add_entry() {
    if (num_entries >= MAX) {
        printf("Phonebook is full!\n");
        return;
    }
    printf("Enter name: ");
    scanf("%s", phonebook[num_entries].name);
    printf("Enter phone number: ");
    scanf("%s", phonebook[num_entries].phone);
    num_entries++;
    printf("Entry added successfully!\n");
}

void display_entries() {
    if (num_entries == 0) {
        printf("Phonebook is empty!\n");
        return;
    }
    printf("Phonebook entries:\n");
    for (int i = 0; i < num_entries; i++) {
        printf("%s: %s\n", phonebook[i].name, phonebook[i].phone);
    }
}

void search_entry() {
    char name[50];
    if (num_entries == 0) {
        printf("Phonebook is empty!\n");
        return;
    }
    printf("Enter name to search: ");
    scanf("%s", name);

    for (int i = 0; i < num_entries; i++) {
        if (strcmp(phonebook[i].name, name) == 0) {
            printf("Found: %s -> %s\n", phonebook[i].name, phonebook[i].phone);
            return;
        }
    }
    printf("Name not found!\n");
}

void delete_entry() {
    char name[50];
    if (num_entries == 0) {
        printf("Phonebook is empty!\n");
        return;
    }
    printf("Enter name to delete: ");
    scanf("%s", name);

    for (int i = 0; i < num_entries; i++) {
        if (strcmp(phonebook[i].name, name) == 0) {
            // Shift all entries after this one left by one position
            for (int j = i; j < num_entries - 1; j++) {
                strcpy(phonebook[j].name, phonebook[j + 1].name);
                strcpy(phonebook[j].phone, phonebook[j + 1].phone);
            }
            num_entries--;
            printf("Entry deleted successfully!\n");
            return;
        }
    }
    printf("Name not found!\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n=== Phonebook Menu ===\n");
        printf("1. Add entry\n");
        printf("2. Display all entries\n");
        printf("3. Search entry\n");
        printf("4. Delete entry\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_entry();
                break;
            case 2:
                display_entries();
                break;
            case 3:
                search_entry();
                break;
            case 4:
                delete_entry();
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
