Minesweeper Field Generator
This C++ project generates a Minesweeper game field based on user input.

How the Program Works
The user inputs:

Number of rows (size_a)

Number of columns (size_b)

Number of mines (mines)

Then the user enters the coordinates for each mine (two numbers for each mine).

The program builds:

A game board with mines (*)

Empty cells (.)

Cells with numbers showing how many mines are nearby.

Example
Input:

3 3 2
0 0
1 2
Output:

markdown

 *  1  . 
 2  2  * 
 .  1  1 
* — a mine

. — an empty cell with no adjacent mines

A number — the count of adjacent mines

How to Run
Copy the code into a file, for example minesweeper.cpp.

Compile the program:


g++ minesweeper.cpp -o minesweeper
Run the executable:

bash

./minesweeper
Code Structure
mswp() — the main function that handles field generation and output.

main() — simply calls the mswp() function.

Features
The board is created dynamically based on the user's input.

The program checks the field boundaries to avoid invalid memory access.
