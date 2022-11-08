#include <stdio.h>

int main()
{
    int num; 
    
    printf ("digite um numero qualquer"); 
    
    scanf ("%d", &num); 
    
    if (num < 0) { 
        
        printf ("eh negativo!\n");
        
    } 
     else {
    
    if (num > 0) { 
        
        printf ("eh positivo!"); 
        
    } else { 
        
        printf ("eh um valor neutro!\n"); 
        
    }
    
     } 
        
        
}
