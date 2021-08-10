#include <stdio.h>

int main()
{
    int x;
    printf("enter a random number from 1 to 5: \n");
    scanf("%d",&x);
    
    switch(x)
    {
        case 1:
        printf("food item : Masala dhosa\n");
        printf("prize : Rs 199\n");
        break;
        
        case 2:
        printf("food item : Black forest pastry\n");
        printf("prize : Rs 129\n");
        break;
        
        case 3:
        printf("food item : chatni puri\n");
        printf("prize : Rs 179\n");
        break;
        
        case 4:
        printf("food item : Oreo kitkat milkshake\n");
        printf("prize : Rs 99\n");
        break;
        
        case 5:
        printf("food item : Cheese Frenkie\n");
        printf("prize : Rs 149\n");
        break;
    }

    return 0;
}
