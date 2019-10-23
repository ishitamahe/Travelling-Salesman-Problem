# Travelling-Salesman-Problem
## Aim
From a designated list made, a traveller needs to visit all the cities present in that list. The
distance between all the cities is known. We are required to find the shortest route possible
through which he can visit all the cities exactly once and return to the original city.
## Theory
In this program the concepts used are:
• Recursion: Recursion is the process of repeating items in a self-similar way. In
programming languages, if a program allows you to call a function inside the same
function, then it is called a recursive call of the function. A function func() is called
direct recursive if it calls the same function func(). A function func() is called indirect
recursive if it calls another function
• Depth First Traversal: Depth First Traversal for a graph is similar to Depth First
Traversal of a tree. The only catch here is, unlike trees, graphs may contain cycles, so
we may come to the same node again. To avoid processing a node more than once, we
use a integer visited array.
## Algorithm
Step 1: Start. 
Step 2: The global variables are declared. 
Step 3: Take input in the main function for number of cities and distance between all the
cities using for loop. 
Step 4: Print the values in a distance matrix. 
Step 5: For finding path, minimum_cost function is called. 
Step 6: In the minimum_cost function, an array visited_city[] is given value of 1 for the cities
visited. 
Step 7: The function calls the function tsp(), and the value returned from that is stored in the
variable “nearest_city”. The minimum_cost() function is where the path is printed. 
Step 8: Inside the function tsp(), if the distance between two cities is not 0 and the city hasn’t
been visited before, a for loop is executed, to test the minimum distance in each combination
of cities and the minimum value is stored in a variable “temp” that later is added to the
variable “cost” which stores the total distance to be travelled. 
Step 9: The function tsp() returns the value of the next nearest city to the function
minimum_cost() which then checks whether the if statement in the tsp() was executed. If it
was, the function miimum_cost() calls itself else the control goes back to the main(). 
Step 10: In the main(), the value of minimum distance that is stored in the variable “cost” is
printed. 
Step 11: End. 
## Conclusion
The program takes the distance from every city and outputs the smallest
traversal distance returning back to the starting point. We have used recursion and graph
traversal to achieve the desired output.
