#include <cmath>
#include <cstdio>

const static int kModulo = 1000000003;

int main() {
  double start_number = 0;
  double end_number = 0;

  scanf(" %lf %lf", &start_number, &end_number);
  int sqrt_of_start = ceil(sqrt(start_number));
  int sqrt_of_end = floor(sqrt(end_number));

  int num_of_condition_number = sqrt_of_end - sqrt_of_start + 1;
  int sum_of_condition_number = 0;
  for (long long i = sqrt_of_start; i <= sqrt_of_end; ++i) {
    sum_of_condition_number += ((i % kModulo) * (i % kModulo)) % kModulo;
    sum_of_condition_number %= kModulo;
  }
  printf("%d %d\n", num_of_condition_number, sum_of_condition_number % kModulo);
}