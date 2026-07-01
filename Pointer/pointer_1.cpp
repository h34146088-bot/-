#include <iostream>
using namespace std;

int count_vowels(char *);

int main(){
    char test1[] = "Beautiful day";
    char test2[] = "Merry X'mas";
    char test3[] = "";
    cout << "Vowels in \"Beautiful day\": " << count_vowels(test1) << endl;
    cout << "Vowels in \" Merry X\'mas \": " << count_vowels(test2) << endl;
    cout << "Vowels in \"\": " << count_vowels(test3) << endl;
    return 0;
}

int count_vowels(char *s){
    int vowels = 0;
    for( ; *s != '\0' ; s++){
        if(*s == 'a' || *s == 'A' || *s == 'e' || *s == 'E' || *s == 'i' || *s == 'I' || *s == 'o' || *s == 'O' || *s == 'u' || *s == 'U'){
            vowels++;
        }
    }
    return vowels;
}