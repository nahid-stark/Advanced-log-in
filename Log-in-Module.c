#include<stdio.h>
int main()
{
  char username[50];
  char password[50];
  printf("Enter User Name : ");
  scanf("%49[^\n]s", &username);
  printf("%s", username);
}
