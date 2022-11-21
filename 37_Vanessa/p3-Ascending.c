//Name:Vanessa Jency 
//Roll.no.37   Batch:B   Department:IT 
// C program to display Roll.no, name, percentage of students in ascending order of roll.no





#include<stdio.h>

 /* Declaration of structure */
struct student{ 
	char name[30]; 
	int roll; 
	float percent; 
}; 
int main() { 
	
	/* Declaration of array of structure */ 	  
	struct student s[20], temp; 
	int i,j,n; 
	
	printf("Enter n:\n"); 
	scanf("%d",&n); 
	
	for(i=0;i< n;i++) { 
		printf("Enter name, roll and percentage of student:\n"); 
		scanf("%s%d%f",s[i].name, &s[i].roll, &s[i].percent); 
	} 
	  for(i=0;i< n-1;i++) { 
	  	for(j=i+1;j< n;j++) { 
	  		if(s[i].percent>s[j].percent) { 
	  			temp = s[i]; 
	  			s[i] = s[j]; 
	  			s[j] = temp; 
	  		} 
	  	} 
	  } 
	  printf("Sorted records are:\n"); 
	  
	  for(i=0;i< n;i++) { 
	  	printf("Name: %s\n", s[i].name); 
	  	printf("Roll: %d\n", s[i].roll); 
	  	printf("Percentage: %0.2f\n\n", s[i].percent); 
	  } 
	  return 0; 
}