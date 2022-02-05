#include <iostream>
#include <string>

std::string AESEncryption(std::string input);

int main() {
  std::string input;

  std::cout << "Please input string to encrypt:\n";
  std::cin >> input;

  std::string encryptedString = AESEncryption(input);
  std::cout << "Encrypted string:\n" << encryptedString << "\n";
}