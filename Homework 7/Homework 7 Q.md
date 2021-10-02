Homework 7 
 
1. Consider a 2-by-5 integer array t. 
a) Write a definition for t. 
b) How many rows does t have? 
c) How many columns does t have? 
d) How many elements does t have? 
e) Write the names of all the elements in the second row of t. 
f) Write the names of all the elements in the third column of t. 
g) Write a single statement that sets the element of t in row 1 and column 2 to zero. 
h) Write a nested for statement that initializes each element of t to zero. 
i) Write a statement that inputs the values for the elements of t from the terminal. 
j) Write a series of statements that determine and print the smallest value in t. 
k) Write a statement that displays the elements of the first row of t. 
l) Write a statement that totals the elements of the fourth column of t. 
m) Write a series of statements that print the array t in tabular format. List the column 
subscripts as headings across the top and list the row subscripts at the left of each 
row. 
2. Airline Reservations System
A small airline has just purchased a computer for its new automated reservations 
system. The president has asked you to program the new system. You are to write a 
program to assign seats on each flight of the airline's only plane (capacity: 10 seats). 
Your program should display the following menu of alternatives: 
Please type 1 for "first class" 
Please type 2 for "economy" 
If the person types 1, then your program should assign a seat in the first class section 
(seats 1-5). If the person types 2, then your program should assign a seat in the 
economy section (seats 6-10). Your program should then print a boarding pass 
indicating the person's seat number and whether it is in the first class or economy 
section of the plane. 
Use a single-subscripted array to represent the seating chart of the plane. Initialize all 
the elements of the array to 0 to indicate that all seats are empty. As each seat is 
assigned, set the corresponding elements of the array to 1 to indicate that the seat is no 
longer available. Your program should, of course, never assign a seat that has already 
been assigned. When the first class section is full, your program should ask the person 
if it is acceptable to be placed in the economy section (and vice versa). If yes, then 
make the appropriate seat assignment. If no, then print the message "Next flight leaves 
in 3 hours." 
 
3. Write a program that inputs a line of text into char array s[ 100 ]. Output the line in 
uppercase letters and in lowercase letters. 
4. Write a program that uses function strcmp to compare two strings input by the user. 
The program should state whether the first string is less than, equal to or greater than 
the second string. 
5. Write a program that inputs several lines of text and uses strtok to count the total 
number of words. Assume that the words are separated either by spaces or newline 
characters. 
6. You are to write a Trip Distance Calculator that calculates the approximate driving 
distance for a trip that visits multiple cities. 
The approximate driving distance between two cities is often depicted in a mileage 
chart. Mileage chart is a two-dimensional table that lists across rows and columns. 
To find the distance between two cities, find the cell that is the intersection between 
the origination city row and the destination city column (or vice versa). 
Write a program that lists a menu of cities, including an exit option, and keeps track of 
the total estimated driving miles as each city is chosen. When the user exits, the final 
total estimated driving miles are displayed. 
You could ask for city pairs, but it is preferred that you repetitively ask for a city, 
assuming that you are driving from the prior selection to the current selection.
