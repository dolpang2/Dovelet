#include <algorithm>
#include <iostream>

const static int kNumOfWords = 5;

int main() {
  std::vector<std::string> word_vector;

  std::string word;
  int row_limit = 0;
  for (int i = 0; i < kNumOfWords; ++i) {
    std::cin >> word;

    if (word.size() > row_limit) {
      row_limit = word.size();
    }

    word_vector.push_back(word);
  }

  for (int column = 0; column < row_limit; ++column) {

    for (int row = 0; row < kNumOfWords; ++row) {
      bool is_char_exist = word_vector[row].length() > column;

      if (is_char_exist) {
        printf("%c", word_vector[row][column]);
      }
    }

  }
}