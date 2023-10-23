#include <stdio.h>

int main(){
    int i, m, n, count=0;
    
    printf("Enter M:\n");
    scanf("%d", &m);

    printf("Enter N:\n");
    scanf("%d", &n);
 
if (m <0 || n<0){
     printf("You have entered an invalid input. Program will now terminate\n");
}
else{
    for (i= 1; i<= m; i++) 
{
        if (i % n == 0) 
        {
            count++;
        }
        
    }
    printf("There are %d numbers from 1 to %d that are divisible by %d\n", count, m, n);
}
   
return 0;  
}

    
