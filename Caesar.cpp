#include <iostream>
#include <string>
using namespace std;

string caesarCipher(const string& plain, const string& key) {
    string cipherText = "";
    int keyLength = key.size();

    for (size_t i = 0; i < plain.length(); i++) {
        // Calculate the shift using the corresponding key character
        int shift = key[i % keyLength] - 'A';

        // Shift the plaintext character
        char shiftedChar = (plain[i] - 'A' + shift) % 26 + 'A';

        // Append the shifted character to the ciphertext
        cipherText += shiftedChar;
    }

    return cipherText;
}

string caesarDecrypt(const string& cipherText, const string& key) {
    string plainText = "";
    int keyLength = key.length();

    for (size_t i = 0; i < cipherText.length(); i++) {
        // Calculate the reverse shift using the corresponding key character
        int shift = key[i % keyLength] - 'A';

        // Reverse the shift for the ciphertext character
        char shiftedChar = (cipherText[i] - 'A' - shift + 26) % 26 + 'A';

        // Append the shifted character to the plaintext
        plainText += shiftedChar;
    }

    return plainText;
}

int main() {
    string plain, key;

    // Input plaintext and key
    cout << "Enter the plaintext (uppercase letters only): ";
    cin >> plain;
    cout << "Enter the key (uppercase letters only): ";
    cin >> key;

    // Generate and display the ciphertext
    string cipherText = caesarCipher(plain, key);
    cout << "Ciphertext: " << cipherText << endl;
    string dec = caesarDecrypt(cipherText, key);
    cout<< "Decrypted: "<<dec;

    return 0;
}
