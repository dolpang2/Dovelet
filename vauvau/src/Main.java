import java.util.Scanner;

public class Main {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    int outrageTimeOfFirstDog = scanner.nextInt();
    int gentleTimeOfFirstDog = scanner.nextInt();
    int outrageTimeOfSecondDog = scanner.nextInt();
    int gentleTimeOfSecondDog = scanner.nextInt();
    int durationOfFirstDog = outrageTimeOfFirstDog + gentleTimeOfFirstDog;
    int durationOfSecondDog = outrageTimeOfSecondDog + gentleTimeOfSecondDog;
    int arrivalTimeOfPostman = scanner.nextInt();
    int arrivalTimeOfMilkman = scanner.nextInt();
    int arrivalTimeOfGarbage = scanner.nextInt();

    boolean firstDogWithPostman =
        arrivalTimeOfPostman % durationOfFirstDog > 0
            && arrivalTimeOfPostman % durationOfFirstDog <= outrageTimeOfFirstDog ? true : false;
    boolean secondDogWithPostman =
        arrivalTimeOfPostman % durationOfSecondDog > 0
            && arrivalTimeOfPostman % durationOfSecondDog <= outrageTimeOfSecondDog ? true : false;
    boolean firstDogWithMilkman =
        arrivalTimeOfMilkman % durationOfFirstDog > 0
            && arrivalTimeOfMilkman % durationOfFirstDog <= outrageTimeOfFirstDog ? true : false;
    boolean secondDogWithMilkman =
        arrivalTimeOfMilkman % durationOfSecondDog > 0
            && arrivalTimeOfMilkman % durationOfSecondDog <= outrageTimeOfSecondDog ? true : false;
    boolean firstDogWithGarbage =
        arrivalTimeOfGarbage % durationOfFirstDog > 0
            && arrivalTimeOfGarbage % durationOfFirstDog <= outrageTimeOfFirstDog ? true : false;
    boolean secondDogWithGarbage =
        arrivalTimeOfGarbage % durationOfSecondDog > 0
            && arrivalTimeOfGarbage % durationOfSecondDog <= outrageTimeOfSecondDog ? true : false;

    if (firstDogWithPostman && secondDogWithPostman) {
      System.out.println("both");
    } else if (!firstDogWithPostman && !secondDogWithPostman) {
      System.out.println("none");
    } else {
      System.out.println("one");
    }

    if (firstDogWithMilkman && secondDogWithMilkman) {
      System.out.println("both");
    } else if (!firstDogWithMilkman && !secondDogWithMilkman) {
      System.out.println("none");
    } else {
      System.out.println("one");
    }

    if (firstDogWithGarbage && secondDogWithGarbage) {
      System.out.println("both");
    } else if (!firstDogWithGarbage && !secondDogWithGarbage) {
      System.out.println("none");
    } else {
      System.out.println("one");
    }

    scanner.close();
  }
}
