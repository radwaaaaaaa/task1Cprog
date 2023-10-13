#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct users
{
    char username[50];
    char password[50];
};

int linear_name(struct users arr[], int size, char val[20])
{
    for (int i = 0; i < size; i++)
        if (strcmp(arr[i].username, val) == 0)
            return i;
    return -1;
}

int linear_password(struct users arr[], int size, char val[20])
{
    for (int i = 0; i < size; i++)
        if (strcmp(arr[i].password, val) == 0)
            return i;
    return -1;
}

int main()
{

    struct users arrUsers[20];
    char name[50];
    char pass[50], confirmPass;
    static int arrCount = 0;
    int loginStatus = 0;
    int choise;

    while (1)
    {

        printf("\n\n               ***************  Choose an Order Please **************  \n");
        printf("                              we have  %d Users \n", arrCount);

        printf("1- Registration \n");
        printf("2- Login \n");
        printf("3- Exit \n");

        scanf("%d", &choise);

        if (choise == 1)
        {
            printf("\n\n                 **** For Registration **** \n\n");
            printf("Please Enter Your Name :");
            scanf("%s", arrUsers[arrCount].username);
            printf("Please Enter Your Password :");
            scanf("%s", arrUsers[arrCount].password);
            arrCount++;
            printf("\n\n               ****  Registration Is Done  **** \n\n");
        }
        else if (choise == 2)
        {
            printf("\n\n                  **** For Login ****  \n\n");
            printf("Please Enter Your Name :");
            scanf("%s", name);
            printf("Please Enter Your Password :");
            scanf("%s", pass);

            long resultName = linear_name(arrUsers, arrCount, name);
            long resultPass = linear_password(arrUsers, arrCount, pass);

            if (resultName != -1 && resultPass != -1)
            {
                printf("\n         Login Successfuly     !!");
            }

            else
            {
                printf("\n          usernsme or password is Wrong !!");
            }
        }

        else
        {
            break;
        }
    }

    return 0;
}
