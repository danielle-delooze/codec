#include <iostream>
#include <string>

std::string addRoundKey(std::string input) {

}

std::string subBytes(std::string input) {

}

std::string shiftRows(std::string input) {

}

std::string mixColumns(std::string input) {

}

std::string AESEncryption(std::string input) {
  /*
    Advanced Encryption Standard
    Symmetric key symmetric block cipher
    128-bit data, 128/192/256-bit keys
  */

  return input;
}



int main() {
  std::string input;

  std::cout << "Please input string to encrypt:\n";
  std::cin >> input;

  std::string encryptedString = AESEncryption(input);
  std::cout << "Encrypted string:\n" << encryptedString << "\n";
}