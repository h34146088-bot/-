#include <iostream>
using namespace std;

void reverse(char *);

int main() {
    char test1[] = "hello";
    char test2[] = "madam";
    char test3[] = "spring";
    char test4[] = "winter spring";
    char test5[] = "hot spring";
    reverse(test1);
    reverse(test2);
    reverse(test3);
    reverse(test4);
    reverse(test5);
    cout << "Reversed: " << test1 << endl; // Output: "olleh"
    cout << "Reversed: " << test2 << endl; // Output: "madam"
    cout << "Reversed: " << test3 << endl; // Output: "gnirps"
    cout << "Reversed: " << test4 << endl; // Output: "gnirps retniw"
    cout << "Reversed: " << test5 << endl; // Output: "gnirps toh"
    return 0;
}

void reverse(char *s) {
    // Initialize length counter and save the starting position
    int len = 0;
    char *start = s;

    // Calculate the length of the string by moving through until null terminator
    for(; *s != '\0'; s++) {
        len++;
    }

    // Reset pointer to the beginning of the string
    s = start;

    // Swap characters from both ends moving towards the middle
    char original;
    for(int i = 0; i < len / 2; i++) {
        original = *(s + i);
        *(s + i) = *(s + (len - i - 1));
        *(s + (len - i - 1)) = original;
    }
}