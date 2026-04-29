import java.util.Scanner;
import java.util.Random;
public class Guess {
    public static void main(String[] args) {
        System.out.println("Welcome to the Guessing Game!");
        // Additional game logic can be added here
         Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        String playAgain = "y";
        System.out.println("==============================");
        System.out.println("GUESS THE NUMBER GAME");
        System.out.println("==============================");
       
        while (playAgain.equalsIgnoreCase("y")) { 
            System.out.println("Select Difficulty Level: 1 (Easy), 2 (Medium), 3 (Hard)");
            int Attempts = 0;
            int guess = 0;
            int level = scanner.nextInt();
            int maxAttempts;
            boolean won = false;
            int maxNumber;
            int numberToGuess = 0;
            int bestScore = Integer.MAX_VALUE;
            if (level == 1) {
                numberToGuess = random.nextInt(10) + 1;
                maxNumber = 10;
                maxAttempts = 5;
                System.out.println("Level 1 selected: Guess a number between 1 and 10. You have 5 attempts.");
            } else if (level == 2) {
                numberToGuess = random.nextInt(50) + 1;
                maxNumber = 50;
                maxAttempts = 10;
                System.out.println("Level 2 selected: Guess a number between 1 and 50. You have 10 attempts.");
            } else {
                numberToGuess = random.nextInt(100) + 1;
                maxNumber = 100;
                maxAttempts = 15;
                System.out.println("Level 3 selected: Guess a number between 1 and 100. You have 15 attempts.");
            }
            do {
                System.out.print("Enter your guess: ");
                guess = scanner.nextInt();
                Attempts++;
                if (guess < numberToGuess) {
                    System.out.println("Too low! Try again.");
                } else if (guess > numberToGuess) {
                    System.out.println("Too high! Try again.");
                } else {
                    System.out.println("Congratulations! You've guessed the number " + numberToGuess + " in " + Attempts + " tries.");
                System.out.println("Attempts: " + Attempts);
                    if (Attempts <= 5) {
                        System.out.println("Excellent work!");
                    } else if (Attempts <= 10) {
                        System.out.println("Good job!");
                    } else if (Attempts >= 10) {
                        System.out.println("You can do better next time!");
                    } else if (guess == numberToGuess){
                        won = true;
                    }
                } 
            } while (guess != numberToGuess && Attempts < maxAttempts);
            if (won) {
                System.out.println("Congratulations! You've guessed the number " + numberToGuess + " in " + Attempts + " tries.");
                
                if (Attempts <= maxAttempts-4) {
                        System.out.println("Excellent work!");
                    } else if (Attempts <= maxAttempts-3) {
                        System.out.println("Good job!");
                    } else if (Attempts >= maxAttempts-2) {
                        System.out.println("You can do better next time!");
                    }else if (Attempts >= maxAttempts) {
                System.out.println("Sorry, you've used all your attempts. The number was: " + numberToGuess);
            } 
            }  if (Attempts < bestScore) {
                bestScore = Attempts;
                System.out.println("New best score: " + bestScore + " attempts!");
            }else {
                System.out.println("Your best score remains: " + bestScore + " attempts.");
            }
            System.out.print("Do you want to play again? (y/n): ");
            playAgain = scanner.next();
            System.out.println("Thank you for playing! Goodbye!");
    } 
        scanner.close();
}
}
