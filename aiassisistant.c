#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Welcome! I am your simple AI Assistant.\n");
    printf("Ask me something:\n");

    // Get user input
    fgets(input, sizeof(input), stdin);

    // Remove newline (optional)
    input[strcspn(input, "\n")] = 0;

    // Simple responses
    if (strcmp(input, "hi") == 0 || strcmp(input, "hello") == 0) {
        printf("Hello! How can I help you?\n");
    }
    else if (strcmp(input, "your name") == 0) {
        printf("I am a tiny C AI Assistant!\n");
    }
    else if (strcmp(input, "help") == 0) {
        printf("Sure! You can ask me about weather, time, or general questions.\n");
    }
    else if (strcmp(input, "bye") == 0) {
        printf("Goodbye! Have a great day!\n");
    }
    else {
        printf("Sorry, I don't understand that yet.\n");
    }

    return 0;
}
