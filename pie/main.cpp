#include <cstdio>

struct Fraction {
  int numerator;
  int denominator;
};

int GetGCD(int a, int b);
int GetLCM(int a, int b);

int main() {
  Fraction first_eating_ratio;
  Fraction second_eating_ratio;

  scanf(" %d %d", &first_eating_ratio.numerator, &first_eating_ratio.denominator);
  scanf(" %d %d", &second_eating_ratio.numerator, &second_eating_ratio.denominator);

  int common_numerator = GetLCM(first_eating_ratio.denominator, second_eating_ratio.denominator);
  first_eating_ratio.numerator = first_eating_ratio.numerator * common_numerator / first_eating_ratio.denominator;
  second_eating_ratio.numerator = second_eating_ratio.numerator * common_numerator / second_eating_ratio.denominator;
  first_eating_ratio.denominator = common_numerator;
  second_eating_ratio.denominator = common_numerator;

  Fraction result;
  result.numerator = common_numerator - first_eating_ratio.numerator - second_eating_ratio.numerator;
  result.denominator = common_numerator;

  if (result.numerator == 0) {
    puts("0");
    return 0;
  }

  int common_divisor = GetGCD(result.numerator, result.denominator);
  result.numerator /= common_divisor;
  result.denominator /= common_divisor;

  printf("%d/%d\n", result.numerator, result.denominator);
}

int GetGCD(int a, int b) {
  if (b == 0) {
    return a;
  }

  return GetGCD(b, a % b);
}

int GetLCM(int a, int b) {
  return a * b / GetGCD(a, b);
}