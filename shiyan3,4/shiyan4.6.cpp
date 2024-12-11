#include <iostream>
#include <cstring>
using namespace std;

void count(const char s[], int counts[]) 
{
    for (int i = 0; i < 26; i++) 
    {
        counts[i] = 0;
    }
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (isalpha(s[i])) {
            char c = tolower(s[i]);
            counts[c - 'a']++;
        }
    }
}

int main() {
    char s[100];
    int counts[26];

    cout << "Enter a string:";
    cin.getline(s,100);

    count(s, counts);
    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            cout << static_cast<char>(i + 'a') << ": " << counts[i];
            if (counts[i] != 1) {
                cout << " times";
            }
            else {
                cout << " time";
            }
            cout << endl;
        }
    }
    return 0;
}