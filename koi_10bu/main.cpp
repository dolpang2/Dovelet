#include <cstdio>

const static int kNumOfCars = 5;

int main() {
  int day = 0;

  scanf(" %d", &day);
  int car_num = 0;
  int num_of_violation = 0;
  for (int i = 0; i < kNumOfCars; ++i) {
    scanf(" %d", &car_num);

    if (car_num == day) {
      num_of_violation++;
    }
  }
  printf("%d\n", num_of_violation);
}