# 🔴 Connect Four (C++ Console Game)

This is a console implementation of the classic game **Connect Four**, built in C++. The game is played on a **7x7 grid**, which is larger than the standard 6x7 board.

---

## 🎯 Game Objective

Objective: Get **four** of your marks (either 'X' or 'O') in a row, either horizontally, vertically, or diagonally.

### Players
* **Player 1** uses the mark **'X'**.
* **Player 2** uses the mark **'O'**.

### Game Board
The game is played on a **7 rows by 7 columns** grid. The marks fall to the lowest available space in the chosen column.

| 1 | 2 | 3 | 4 | 5 | 6 | 7 |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| | | | | | | |
| | | | | | | |
| | | | | | | |
| | | | | | | |
| | | | | | | |
| | | | | | | |
| | | | | | | |

---

## ♟️ Gameplay Instructions

### 1. Start the Game
Player 1 starts by choosing any column (from 1 to 7) to drop their mark ('X').

### 2. Turn Order
Players alternate turns. Player 1 always goes first.

### 3. Choose a Spot
On your turn, enter the **number of the column** (1-7) where you want to drop your piece. The piece will automatically fall to the lowest empty row in that column.

### 4. Winning the Game
You win by placing **four** of your marks in a consecutive line, which can be:
* **Horizontal:** Four in a row across any row.
* **Vertical:** Four in a stack down any column.
* **Diagonal:** Four in a diagonal line (up-right, down-right, up-left, or down-left).

### 5. Draw Condition
If all **49** spots are filled and no one has connected four marks, the game ends in a draw.

### Important Rules
* **Players cannot choose a full column.** If you select a column that is already full, the game will prompt you to choose again.
* Pieces always "fall" to the bottom-most available slot in the chosen column.

---

## 🛑 Game Over

* If there is a winner, the game announces the winner (**'X' Won** or **'O' Won**).
* If no one wins after the board is full, the game announces a **Draw** (**"Game Over, No one won."**).
