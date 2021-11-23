#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <cs50.h>

int main(void)
{
    int number;
    
    //COUNTER FOR PRODUCTS 1, 2, 3, 4 AND 5:
    
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    int counter4 = 0;
    int counter5 = 0;
    
    printf("Enter product number:\n");
    
    //TO STORE THE INPUT:
    
    while((number = getchar()) != EOF)
    {
        switch(number)
        {
            case '1':
            printf("Quantity of this product sold last week:\n");
            scanf("%d", &counter1);
            printf("Done. Now enter the new product number (ctrl + d to finish).\n");
            break;
            
            case '2':
            printf("Quantity of this product sold last week:\n");
            scanf("%d", &counter2);
            printf("Done. Now enter the new product number (ctrl + d to finish).\n");
            break;
            
            case '3':
            printf("Quantity of this product sold last week:\n");
            scanf("%d", &counter3);
            printf("Done. Now enter the new product number (ctrl + d to finish).\n");
            break;
            
            case '4':
            printf("Quantity of this product sold last week:\n");
            scanf("%d", &counter4);
            printf("Done. Now enter the new product number (ctrl + d to finish).\n");
            break;
            
            case '5':
            printf("Quantity of this product sold last week:\n");
            scanf("%d", &counter5);
            printf("Done. Now enter the new product number (ctrl + d to finish).\n");
            break;
            
            case '\n':
            case ' ':
            case '\t':
            break;
            
            default:
            printf("%s", "This item doesn't exist. Try again (ctrl + d to finish):\n");
            break;
        }
    }
    
    //TO CALCULATE EACH PRODUCT'S VALUE
    
    float price1 = (float) counter1 * 2.98;
    float price2 = (float) counter2 * 4.50;
    float price3 = (float) counter3 * 9.98;
    float price4 = (float) counter4 * 4.49;
    float price5 = (float) counter5 * 6.87;
    
    //TOTAL RETAIL VALUE
    
    float retail_value = (float) price1 + price2 + price3 + price4 + price5;
    
    printf("\nThe total amount of sales this week was:\n");
    printf("%d no. 1\n", counter1);
    printf("%d no. 2\n", counter2);
    printf("%d no. 3\n", counter3);
    printf("%d no. 4\n", counter4);
    printf("%d no. 5\n", counter5);
    
    printf("The total values of products sold this week was %.2f.\n", retail_value);
}
