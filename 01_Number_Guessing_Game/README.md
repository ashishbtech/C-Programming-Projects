# 🔢 Number Guessing Game

A fun and interactive command-line game built in C. This project demonstrates basic control flow, user input handling, and random number generation. 

## 📸 Preview
![Game Preview](preview.png)

## 🎮 How to Play
1. The program generates a random number between 1 and 100.
2. You will be prompted to enter your guess.
3. If your guess is too high, the game will hint: "Lower number please!"
4. If your guess is too low, the game will hint: "Higher number please!"
5. The game continues until you guess the correct number, and then it reveals the total number of attempts it took you to win.

## 🚀 Key Learning Concepts
* **Random Number Generation:** Utilizing `rand()` and `srand()` with time headers to generate a unique secret number every time the game runs.
* **Control Flow:** Using `do-while` or `while` loops to keep the game running until the winning condition is met.
* **Conditional Logic:** Implementing `if-else` statements to provide feedback on the user's guesses.

## 🛠️ How to Compile and Run

To play this game on your local machine, ensure you have a C compiler (like GCC) installed.

1. Open your terminal and navigate to the directory containing the file.
2. Compile the code using GCC:
   ```bash
   gcc main.c -o guess_game