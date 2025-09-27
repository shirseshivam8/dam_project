#include <stdio.h> 
 
int main() { 
    int rating; 
 
    printf("Enter movie rating (1 to 5): "); 
    scanf("%d", &rating); 
 
    if (rating == 5) { 
        printf("Excellent Movie! * * * * * STAR\n"); 
    } 
    else if (rating == 4) { 
        printf("Very Good Movie! * * * * STAR\n"); 
    } 
    else if (rating == 3) { 
        printf("Good Movie! * * * STAR\n"); 
    } 
    else if (rating == 2) { 
        printf("Average Movie! * * STAR\n"); 
    } 
    else if (rating == 1) { 
        printf("Poor Movie! * STAR\n"); 
    } 
    else { 
        printf("Invalid rating. Please enter between 1 and 5.\n"); 
    } 
 
return 0; 
} 
