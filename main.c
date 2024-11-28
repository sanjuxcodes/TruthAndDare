#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Array of Truth questions
char *truths[] = {
    "What is your most embarrassing moment?",
    "What is the biggest lie you have ever told?",
    "Who is your secret crush?",
    "Have you ever cheated on a test?",
    "What is your biggest fear?"
};

// Array of Dare challenges
char *dares[] = {
    "Do 10 push-ups right now!",
    "Sing a song loudly in front of everyone.",
    "Call a random contact and say 'I love you.'",
    "Do an impression of your favorite celebrity.",
    "Dance without music for one minute."
};

// Function to get a random Truth or Dare
char* getRandomPrompt(char *prompts[],int size) {
    return prompts[rand() % size];
}

int main() {
char choice;
    printf("Welcome to the Truth and Dare Game!\n");

    while (1) {
        printf("\nChoose an option:\n");
        printf("T - Truth\n");
        printf("D - Dare\n");
        printf("Q - Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == 'T' || choice == 't') {
            printf("Truth: %s\n", getRandomPrompt(truths, sizeof(truths) / sizeof(truths[0])));
        } else if (choice == 'D' || choice == 'd') {
            printf("Dare: %s\n", getRandomPrompt(dares, sizeof(dares) / sizeof(dares[0])));
        } else if (choice == 'Q' || choice == 'q') {
            printf("Thanks for playing! Goodbye!\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
