#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";
    int words = 0, digits = 0, special = 0;
    int i;

    cout << "Enter a string:\n";
    getline(cin, str);

    // Step 1: Remove extra spaces
    for (i = 0; i < str.length(); i++) {
        if (str[i] != ' ' || (i > 0 && str[i - 1] != ' ')) {
            result = result + str[i];
        }
    }

    // Remove leading space
    if (result[0] == ' ')
        result.erase(0, 1);

    // Remove trailing space
    if (result[result.length() - 1] == ' ')
        result.erase(result.length() - 1, 1);

    // Step 2: Convert to sentence case
    if (result[0] >= 'a' && result[0] <= 'z')
        result[0] = result[0] - 32;

    for (i = 1; i < result.length(); i++) {
        if (result[i] >= 'A' && result[i] <= 'Z')
            result[i] = result[i] + 32;
    }

    // Step 3: Count words, digits, special characters
    for (i = 0; i < result.length(); i++) {
        if (result[i] == ' ')
            words++;

        if (result[i] >= '0' && result[i] <= '9')
            digits++;

        if (!((result[i] >= 'A' && result[i] <= 'Z') ||
              (result[i] >= 'a' && result[i] <= 'z') ||
              (result[i] >= '0' && result[i] <= '9') ||
              result[i] == ' ')) {
            special++;
        }
    }

    if (result.length() > 0)
        words = words + 1;

    // Step 4: Validation
    if (special == 0)
        cout << "\nString is valid (contains only alphabets, digits, and spaces)\n";
    else
        cout << "\nString is invalid (contains special characters)\n";

    // Output results
    cout << "\nNormalized String: " << result << endl;
    cout << "Total Words: " << words << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << special << endl;

    return 0;
}

