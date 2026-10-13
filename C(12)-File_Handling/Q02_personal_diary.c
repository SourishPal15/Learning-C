/* Q.2) Develop a simple diary application that saves personal
entries in a text file. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define FILE_NAME "diary.txt"
#define MAX_LINE 1000
#define MAX_SEARCH 100

void clearInputBuffer() {
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF);
}

void writeEntry() {
    FILE *fp;
    char line[MAX_LINE];

    fp = fopen(FILE_NAME, "a");

    if (fp == NULL) {
        printf("\nError: Unable to open diary file.\n");
        return;
    }

    printf("\nEnter your diary entry.\n");
    printf("Enter a single line containing END to finish.\n\n");

    fprintf(fp, "\nDate: ");

    char date[100];

    printf("Enter date (DD-MM-YYYY): ");

    if (fgets(date, sizeof(date), stdin) == NULL) {
        fclose(fp);
        return;
    }

    date[strcspn(date, "\n")] = '\0';

    fprintf(fp, "%s\n", date);

    while (1) {
        if (fgets(line, sizeof(line), stdin) == NULL)
            break;

        line[strcspn(line, "\n")] = '\0';

        if (strcmp(line, "END") == 0)
            break;

        fprintf(fp, "%s\n", line);
    }

    fclose(fp);

    printf("\nDiary entry saved successfully!\n");
}

void viewEntries() {
    FILE *fp;
    char line[MAX_LINE];

    fp = fopen(FILE_NAME, "r");

    if (fp == NULL) {
        printf("\nNo diary entries found.\n");
        return;
    }

    printf("\n========== YOUR PERSONAL DIARY ==========\n\n");

    while (fgets(line, sizeof(line), fp) != NULL)
        printf("%s", line);

    printf("\n==========================================\n");

    fclose(fp);
}

void countCharacters() {
    FILE *fp;
    long characters = 0;
    int ch;

    fp = fopen(FILE_NAME, "r");

    if (fp == NULL) {
        printf("\nNo diary file found.\n");
        return;
    }

    while ((ch = fgetc(fp)) != EOF)
        characters++;

    fclose(fp);

    printf("\nTotal characters in diary: %ld\n", characters);
}

void countLines() {
    FILE *fp;
    int ch;
    long lines = 0;
    int hasContent = 0;
    int lastChar = '\n';

    fp = fopen(FILE_NAME, "r");

    if (fp == NULL) {
        printf("\nNo diary file found.\n");
        return;
    }

    while ((ch = fgetc(fp)) != EOF) {
        hasContent = 1;

        if (ch == '\n')
            lines++;

        lastChar = ch;
    }

    if (hasContent && lastChar != '\n')
        lines++;

    fclose(fp);

    printf("\nTotal lines in diary: %ld\n", lines);
}

int containsIgnoreCase(const char *text, const char *word) {
    size_t textLen = strlen(text);
    size_t wordLen = strlen(word);

    if (wordLen == 0)
        return 0;

    if (wordLen > textLen)
        return 0;

    for (size_t i = 0; i <= textLen - wordLen; i++) {
        size_t j = 0;

        while (j < wordLen &&
               tolower((unsigned char)text[i + j]) ==
               tolower((unsigned char)word[j])) {
            j++;
        }

        if (j == wordLen)
            return 1;
    }

    return 0;
}

void searchDiary() {
    FILE *fp;
    char line[MAX_LINE];
    char word[MAX_SEARCH];
    long lineNumber = 0;
    int found = 0;

    fp = fopen(FILE_NAME, "r");

    if (fp == NULL) {
        printf("\nNo diary file found.\n");
        return;
    }

    printf("\nEnter the word or phrase to search: ");

    if (fgets(word, sizeof(word), stdin) == NULL) {
        fclose(fp);
        return;
    }

    word[strcspn(word, "\n")] = '\0';

    if (word[0] == '\0') {
        printf("\nSearch term cannot be empty.\n");
        fclose(fp);
        return;
    }

    printf("\n========== SEARCH RESULTS ==========\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        lineNumber++;

        if (containsIgnoreCase(line, word)) {
            printf("Line %ld: %s", lineNumber, line);

            if (strchr(line, '\n') == NULL)
                printf("\n");

            found = 1;
        }
    }

    if (!found)
        printf("No matches found for \"%s\".\n", word);

    printf("====================================\n");

    fclose(fp);
}

int main() {
    int choice;

    do {
        printf("\n========== PERSONAL DIARY ==========\n");
        printf("1. Write New Entry\n");
        printf("2. View All Entries\n");
        printf("3. Count Characters\n");
        printf("4. Count Lines\n");
        printf("5. Search for a Word\n");
        printf("6. Exit\n");
        printf("====================================");
        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input. Please enter a number.\n");
            clearInputBuffer();
            continue;
        }

        clearInputBuffer();

        switch (choice) {
            case 1:
                writeEntry();
                break;

            case 2:
                viewEntries();
                break;

            case 3:
                countCharacters();
                break;

            case 4:
                countLines();
                break;

            case 5:
                searchDiary();
                break;

            case 6:
                printf("\nYour diary has been saved. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
