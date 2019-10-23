#include <stdio.h>
int matrix[25][25], visited_cities[10], limit, cost = 0; 	//global variables
 
int tsp(int c)												//function to find next nearest city
{
 int count, nearest_city = 999;
 int minimum = 999, temp;
 for(count = 0; count < limit; count++)
 {
	 if((matrix[c][count] != 0) && (visited_cities[count] == 0))    //to check if city has been visited                 
	{
		 if(matrix[c][count] < minimum)
		 {
		 	minimum = matrix[count][0] + matrix[c][count];
		 }
		 temp = matrix[c][count];
		 nearest_city = count;
	 }
 }
 if(minimum != 999)
 {
 cost = cost + temp;
 }
 return nearest_city;										//returns value of next nearest city	
}
 
void minimum_cost(int city)
{                            
 int nearest_city;
 visited_cities[city] = 1;
 printf("%d ", city);                                        //prints path
 nearest_city = tsp(city);
 if(nearest_city == 999)
 {
	 nearest_city = 0;
	 printf("%d", nearest_city);							//prints the origional city at the end again before exiting the function
	 cost = cost + matrix[city][nearest_city];
	 return;												//Exits function
 }
 minimum_cost(nearest_city);								//recursive function
}
 
int main()
{ 
 int i, j;
 printf("Enter Total Number of Cities:\t");
 scanf("%d", &limit);
 for(i=0;i<limit-1;i++)										//To take input of distances
{
	printf("\nEnter distances from city %d",i);
	for(j=0;j<limit;j++)
	{
		if(i==j)
			matrix[i][j]=0;
		else
		{
			if(matrix[i][j]!=NULL)
			{
			}
			else
			{
				printf("\n Enter distance between city %d and city %d: ",i,j);
				scanf("%d",&matrix[i][j]);
				matrix[j][i]=matrix[i][j];
			}	
		}
	}
	visited_cities[i] = 0;	 	
}
 printf("\nEntered Distance Matrix\n");
 for(i = 0; i < limit; i++)
 {
	 printf("\n");
	 for(j = 0; j < limit; j++)
	 {
	 printf("%d ", matrix[i][j]);
	 }
 }
 printf("\n\nPath:\t");
 minimum_cost(0);											//function call to minimum_cost
 printf("\n\nMinimum distance: ");
 printf("%d\n", cost);
 return 0;
}
