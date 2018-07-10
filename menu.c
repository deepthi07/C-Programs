# include <stdio.h>
int main()
{
	int TotalPrice=0, Choice, burgerPrice=200,Frenchfries_price=50,pizza_price=500,SandWiches_price=150;
	printf("Today Menu\n");
	printf("Select an item\n");
    printf("1.Burger %d\n",burgerPrice);
    printf("2.Frenchfries %d\n",Frenchfries_price);
    printf("3.pizza %d\n",pizza_price);
    printf("4.SandWiches %d\n",SandWiches_price);
    scanf("%i",&Choice);
    switch(Choice)
    {
    	case 1:TotalPrice += burgerPrice;

    	break;
    	case 2:TotalPrice += Frenchfries_price;

    	break;
    	case 3:TotalPrice += pizza_price;

    	break;
    	case 4:TotalPrice += SandWiches_price;

    	break;

    	
    }
    	printf("Thank you for ordering\n");

       printf("Total so far: %i\n", TotalPrice);
       printf("Thank you for coming\n, Have a nice day\n");
       return 0;
    }


    
   

    



