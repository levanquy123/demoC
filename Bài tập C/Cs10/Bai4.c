#include <stdio.h>

void Menu();
void Manage_Foods_and_Drinks();
void Manage_Order();

int main(int argc, char const *argv[])
{
    system("cls");
    Menu();
    return 0;
}
void Menu()
{
    int select;
    do
    {
        printf("------Menu-------\n");
        printf("=================\n");
        printf("1. Manage Foods and Drinks\n");
        printf("2. Manage Orders\n");
        printf("3. Report\n");
        printf("0.Exit\n");
        printf("=================\n");

        printf("Select: ");
        scanf("%d", &select);
        getchar();
        switch (select)
        {
        case 1:
            Manage_Foods_and_Drinks();
            break;

        case 2:
            Manage_Order();
            break;
        case 3:
            printf("Report\n");
            break;
        case 0:
            printf("Exit\n");
            break;
        }
    } while (select != 0);
}
void Manage_Foods_and_Drinks()
{
    int select;
    do
    {
        printf("Manage Drinks and Fooods\n");
        printf("=================\n");
        printf("1. Add new drink\n");
        printf("2. Add new food\n");
        printf("3. Display stock report\n");
        printf("0.Back to main menu\n");
        printf("=================\n");

        printf("Select: ");
        scanf("%d", &select);
        getchar();

        switch (select)
        {
        case 1:
            printf("1. Add new drink\n");
            break;
        case 2:
            printf("Add new food for restaurant\n");
            printf("Enter return Menu....\n");
            getchar();
            break;
        case 3:
            printf("3. Display stock report\n");
            break;
        case 0:
            printf("Back to main menu\n");
        }
    } while (select != 0);
}
void Manage_Order()
{
    int select;
    do
    {
        printf("Manage Orders\n");
        printf("=================\n");
        printf("1. Create new order\n");
        printf("2. Print order\n");
        printf("0.Back to main menu\n");
        printf("=================\n");

        printf("Select: ");
        scanf("%d", &select);
        getchar();
        switch (select)
        {
        case 1:
            printf("Create an order for customer");
            printf("Enter return Menu....\n");
            getchar();
            break;
        case 2:
            printf("Print order\n");
            break;
        case 0:
            printf("Back to main menu\n");
        }
    } while (select != 0);
}
