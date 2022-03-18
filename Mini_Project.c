#include <stdio.h>

int main()
{
    char mobile[] = "Mobile\t"; // done
    printf("%s", mobile);
    char car[] = "Car\t"; // done
    printf("%s", car);
    char tv[] = "Television\t"; // done
    printf("%s", tv);
    char laptop[] = "Laptop\t"; // done
    printf("%s", laptop);
    char fridge[] = "Fridge\t"; // done
    printf("%s", fridge);
    char ac[] = "A.C\n"; // done
    printf("%s", ac);
    printf("Enter the products about which you want to know from above list : \n");
    char string[10];
    scanf("%s", string);
    if (*string == *mobile) //               MOBILE
    {
        int price[10];
        for (int i = 0; i < 6; i++)
        {
            price[i] = 10000 * (i + 1);
        }
        char *srr[6] = {"Model : Samsung A10    ",
                        "Model : Panasonic Novo ",
                        "Model : Vivo Y52       ",
                        "Model : Samsung S10    ",
                        "Model : Motorola A12   ",
                        "Model : Apple iPhone 10"};
        int serial[6];
        for (int i = 0; i < 6; i++)
        {
            serial[i] = i + 1;
        }
        for (int i = 0; i < 6; i++)
        {
            printf("%d) ", serial[i]);
            printf("%s\t\t", srr[i]);
            printf("Price : %d\n", price[i]);
        }
        int accbalance;
        printf("Enter you account balance : ");
        scanf("%d", &accbalance);
        if (accbalance >= price[0])
        {
            printf("You can buy following products : \n");
            for (int i = 0; i < 6; i++)
            {
                if (price[i] <= accbalance)
                {
                    printf("%d) ", serial[i]);
                    printf("%s\t\t", srr[i]);
                    printf("Price : %d \n", price[i]);
                }
            }
        }
        else
        {
            printf("You can't buy any of the products");
            goto end;
        }
        int req;
        printf("Enter the serial no of the product you want to buy : ");
        scanf("%d", &req);
        int rembal;
        for (int i = 0; i < 6; i++)
        {
            if (req == serial[i])
            {
                rembal = accbalance - price[i];
                printf("You will have %d money left in your account \n", rembal);
                printf("Do you want to place the order ? ");
                char st[3];
                scanf("%s", &st);
                char yes[] = "YES";
                if (*st == *yes)
                {
                    printf("Order placed");
                }
                else
                {
                    printf("Order not placed");
                }
                break;
            }
        }
    }
    else if (*string == *tv) //       TV
    {
        int price[10];
        for (int i = 0; i < 6; i++)
        {
            price[i] = 20000 * (i + 1);
        }
        char *srr[6] = {"Model : Mi HD (32 inches)               ",
                        "Model : One Plus (43 inches)            ",
                        "Model : Redmi 4K Ultra(32 inches)       ",
                        "Model : Samsung Crystal 4K(58 inches)   ",
                        "Model : TCL Andriod TV(40 inches)       ",
                        "Model : LG Smart LED(50 inches)         "};

        int serial[6];
        for (int i = 0; i < 6; i++)
        {
            serial[i] = i + 1;
        }

        for (int i = 0; i < 6; i++)
        {
            printf("%d) ", serial[i]);
            printf("%s\t\t", srr[i]);
            printf("Price : %d\n", price[i]);
        }
        int accbalance;
        printf("Enter you account balance : ");
        scanf("%d", &accbalance);
        if (accbalance >= price[0])
        {
            printf("You can buy following products : \n");
            for (int i = 0; i < 6; i++)
            {
                if (price[i] <= accbalance)
                {
                    printf("%d) ", serial[i]);
                    printf("%s\t\t", srr[i]);
                    printf("Price : %d \n", price[i]);
                }
            }
        }
        else
        {
            printf("You can't buy any of the products");
            goto end;
        }
        int req;
        printf("Enter the serial no of the product you want to buy : ");
        scanf("%d", &req);
        int rembal;
        for (int i = 0; i < 6; i++)
        {
            if (req == serial[i])
            {
                rembal = accbalance - price[i];
                printf("You will have %d money left in your account \n", rembal);
                printf("Do you want to place the order ? ");
                char st[3];
                scanf("%s", &st);
                char yes[] = "YES";
                if (*st == *yes)
                {
                    printf("Order placed");
                }
                else
                {
                    printf("Order not placed");
                }
                break;
            }
        }
    }
    else if (*string == *car) //         CAR
    {
        int price[10];
        for (int i = 0; i < 6; i++)
        {
            price[i] = 150000 * (i + 1);
        }
        char *srr[6] = {"Model : Nano           ",
                        "Model : Swift Dezire   ",
                        "Model : Maruti Baleno  ",
                        "Model : Mahindra Bolero",
                        "Model : Skoda Rapid    ",
                        "Model : Audi A1        "};
        int serial[6];
        for (int i = 0; i < 6; i++)
        {
            serial[i] = i + 1;
        }
        for (int i = 0; i < 6; i++)
        {
            printf("%d) ", serial[i]);
            printf("%s\t\t", srr[i]);
            printf("Price : %d\n", price[i]);
        }
        int accbalance;
        printf("Enter you account balance : ");
        scanf("%d", &accbalance);
        if (accbalance >= price[0])
        {
            printf("You can buy following products : \n");
            for (int i = 0; i < 6; i++)
            {
                if (price[i] <= accbalance)
                {
                    printf("%d) ", serial[i]);
                    printf("%s\t\t", srr[i]);
                    printf("Price : %d \n", price[i]);
                }
            }
        }
        else
        {
            printf("You can't buy any of the products");
            goto end;
        }
        int req;
        printf("Enter the serial no of the product you want to buy : ");
        scanf("%d", &req);
        int rembal;
        for (int i = 0; i < 6; i++)
        {
            if (req == serial[i])
            {
                rembal = accbalance - price[i];
                printf("You will have %d money left in your account \n", rembal);
                printf("Do you want to place the order ? ");
                char st[3];
                scanf("%s", &st);
                char yes[] = "YES";
                if (*st == *yes)
                {
                    printf("Order placed");
                }
                else
                {
                    printf("Order not placed");
                }
                break;
            }
        }
    }
    else if (*string == *laptop) //         LAPTOP
    {
        int price[10];
        for (int i = 0; i < 6; i++)
        {
            price[i] = 15000 * (i + 1);
        }
        char *srr[6] = {"Model : HP Pavallion              ",
                        "Model : Acer Nitro 5              ",
                        "Model : Asus TUF A15              ",
                        "Model : Asus Rog Strix            ",
                        "Model : Acer Predator Helios 300  ",
                        "Model : Macbook air               "};
        int serial[6];
        for (int i = 0; i < 6; i++)
        {
            serial[i] = i + 1;
        }
        for (int i = 0; i < 6; i++)
        {
            printf("%d) ", serial[i]);
            printf("%s\t\t", srr[i]);
            printf("Price : %d\n", price[i]);
        }
        int accbalance;
        printf("Enter you account balance : ");
        scanf("%d", &accbalance);
        if (accbalance >= price[0])
        {
            printf("You can buy following products : \n");
            for (int i = 0; i < 6; i++)
            {
                if (price[i] <= accbalance)
                {
                    printf("%d) ", serial[i]);
                    printf("%s\t\t", srr[i]);
                    printf("Price : %d \n", price[i]);
                }
            }
        }
        else
        {
            printf("You can't buy any of the products");
            goto end;
        }
        int req;
        printf("Enter the serial no of the product you want to buy : ");
        scanf("%d", &req);
        int rembal;
        for (int i = 0; i < 6; i++)
        {
            if (req == serial[i])
            {
                rembal = accbalance - price[i];
                printf("You will have %d money left in your account \n", rembal);
                printf("Do you want to place the order ? ");
                char st[3];
                scanf("%s", &st);
                char yes[] = "YES";
                if (*st == *yes)
                {
                    printf("Order placed");
                }
                else
                {
                    printf("Order not placed");
                }
                break;
            }
        }
    }
    else if (*string == *ac) //          AC
    {
        int price[10];
        for (int i = 0; i < 6; i++)
        {
            price[i] = 25000 * (i + 1);
        }
        char *srr[6] = {"Model : Hitachi RSC318HBD       ",
                        "Model : Daikin R32              ",
                        "Model : OGeneral ASGG12CGTA     ",
                        "Model : Voltas 185JY            ",
                        "Model : Blue Star IC312EBTU     ",
                        "Model : Samsung AR18RG3BAWKNNA  "};
        int serial[6];
        for (int i = 0; i < 6; i++)
        {
            serial[i] = i + 1;
        }
        for (int i = 0; i < 6; i++)
        {
            printf("%d) ", serial[i]);
            printf("%s\t\t", srr[i]);
            printf("Price : %d\n", price[i]);
        }
        int accbalance;
        printf("Enter you account balance : ");
        scanf("%d", &accbalance);
        if (accbalance >= price[0])
        {
            printf("You can buy following products : \n");
            for (int i = 0; i < 6; i++)
            {
                if (price[i] <= accbalance)
                {
                    printf("%d) ", serial[i]);
                    printf("%s\t\t", srr[i]);
                    printf("Price : %d \n", price[i]);
                }
            }
        }
        else
        {
            printf("You can't buy any of the products");
            goto end;
        }
        int req;
        printf("Enter the serial no of the product you want to buy : ");
        scanf("%d", &req);
        int rembal;
        for (int i = 0; i < 6; i++)
        {
            if (req == serial[i])
            {
                rembal = accbalance - price[i];
                printf("You will have %d money left in your account \n", rembal);
                printf("Do you want to place the order ? ");
                char st[3];
                scanf("%s", &st);
                char yes[] = "YES";
                if (*st == *yes)
                {
                    printf("Order placed");
                }
                else
                {
                    printf("Order not placed");
                }
                break;
            }
        }
    }
    else if (*string == *fridge) //      FRIDGE
    {
        int price[10];
        for (int i = 0; i < 6; i++)
        {
            price[i] = 3000 * (i + 7);
        }
        char *srr[6] = {"Model : Whirlpool 265 L 3-star Inverter Frost-Free        ",
                        "Model : Haier 258 L 3-star Inverter Frost-Free            ",
                        "Model : Godrej 260 L 3-star Inverter Frost-Free           ",
                        "Model : LG 260 L 3-star Smart Inverter Frost Free         ",
                        "Model : Lloyd 276 L 2 Star Inverter Frost Free            ",
                        "Model : Panasonic 307 L 3-star 6-Stage Inverter Frost-Free"};
        int serial[6];
        for (int i = 0; i < 6; i++)
        {
            serial[i] = i + 1;
        }
        for (int i = 0; i < 6; i++)
        {
            printf("%d) ", serial[i]);
            printf("%s\t\t", srr[i]);
            printf("Price : %d\n", price[i]);
        }
        int accbalance;
        printf("Enter you account balance : ");
        scanf("%d", &accbalance);
        if (accbalance >= price[0])
        {
            printf("You can buy following products : \n");
            for (int i = 0; i < 6; i++)
            {
                if (price[i] <= accbalance)
                {
                    printf("%d) ", serial[i]);
                    printf("%s\t\t", srr[i]);
                    printf("Price : %d \n", price[i]);
                }
            }
        }
        else
        {
            printf("You can't buy any of the products");
            goto end;
        }
        int req;
        printf("Enter the serial no of the product you want to buy : ");
        scanf("%d", &req);
        int rembal;
        for (int i = 0; i < 6; i++)
        {
            if (req == serial[i])
            {
                rembal = accbalance - price[i];
                printf("You will have %d money left in your account \n", rembal);
                printf("Do you want to place the order ? ");
                char st[3];
                scanf("%s", &st);
                char yes[] = "YES";
                if (*st == *yes)
                {
                    printf("Order placed");
                }
                else
                {
                    printf("Order not placed");
                }
                break;
            }
        }
    }
end:
    return 0;
}