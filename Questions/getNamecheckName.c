// getName
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void getName(char name[], char message[]);
bool checkName(char name[]);

int main()
{
  char firstName[31];
  getName(firstName, "Enter your first name\n");
  while(!checkName(firstName)){
    getName(firstName, "Enter your first name\n");
  }
  printf("First Name Entered: %s\n", firstName);
  return 0;
}


void getName(char name[], char message[]){
  printf(message);
  scanf("%s", name);
}

bool checkName(char name[]) {
  if(strlen(name) > 30){
    printf("Invalid entry. Name cannot have more than 30 characters.");
    return false;
  }
  char* letter = "abcedfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  bool invalid = false; // flag variable
  for(int i = 0; i < strlen(name); i++){
    int c = name[i];
    invalid = strchr(letter, c) == NULL;
    if(invalid){
      printf("Invalid entry. Only alphabets are allowed.");
      return false;
    }
  }
  return true;
}
