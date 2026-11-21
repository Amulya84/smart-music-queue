#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Song {
    char name[50];
    struct Song *next;
};

struct Song *head = NULL;
struct Song *tail = NULL;

// Add song
void addSong() {
    struct Song *newSong;
    newSong = (struct Song*)malloc(sizeof(struct Song));

    printf("Enter song name: ");
    scanf("%49s", newSong->name);

    newSong->next = NULL;

    if (head == NULL) {
        head = tail = newSong;
    } else {
        tail->next = newSong;
        tail = newSong;
    }

    printf("Song added successfully!\n");
}

// Play next song
void playSong() {
    if (head == NULL) {
        printf("Queue is empty!\n");
        return;
    }

    struct Song *temp = head;

    printf("Now Playing: %s\n", temp->name);

    head = head->next;

    if (head == NULL)
        tail = NULL;

    free(temp);
}

// Search song
void searchSong() {
    char name[50];
    struct Song *temp = head;

    printf("Enter song to search: ");
    scanf("%49s", name);

    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0) {
            printf("Song found: %s\n", name);
            return;
        }
        temp = temp->next;
    }

    printf("Song not found!\n");
}

// Display queue
void displayQueue() {
    struct Song *temp = head;

    if (head == NULL) {
        printf("Queue is empty!\n");
        return;
    }

    printf("\nMusic Queue:\n");

    while (temp != NULL) {
        printf("%s -> ", temp->name);
        temp = temp->next;
    }

    printf("NULL\n");
}

// Main function
int main() {
    int choice;

    do {
        printf("\n===== SMART MUSIC QUEUE =====\n");
        printf("1. Add Song\n");
        printf("2. Play Next Song\n");
        printf("3. Skip Song\n");
        printf("4. Search Song\n");
        printf("5. Display Queue\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addSong();
                break;

            case 2:
                playSong();
                break;

            case 3:
                printf("Skipping song...\n");
                playSong();
                break;

            case 4:
                searchSong();
                break;

            case 5:
                displayQueue();
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}
