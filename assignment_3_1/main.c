#include <stdio.h>

int id_check(char id[8]){
    int i = 0;
    int length = 0;
    while (id[i] != '\0') {
        if (id[i] < '0' || id[i] > '9') {
            printf("Invalid ID-number: '%c' \n", id[i]);
            return 0;
        }
        length++;
        i++;
    }
    if (length == 7) {
    printf("Your ID number is: %s \n", id);
        return 1;
    }
    else if (length < 7) {
        printf("ID-number is too short \n");
        return 0;
    }
    else {
        printf("Your ID number is too long \n");
        return 0;
    }
}

int name_check(const char name[50]) {
    int i = 0;
    int value = 0;
    while (name[i] != '\0'){
        if (!((name[i] >= 'A' && name[i] <= 'Z') ||
      (name[i] >= 'a' && name[i] <= 'z') ||
      name[i] == ' ')) {
            printf("The name includes invalid signs or numbers");
            return 0;
        }
      if (name[i] == ' ') {
          if (name[i+1] == ' ') {
               printf("Your name has too many spaces \n");
               return 0;
          }
      }
      if (name[i] == ' ') {
          value = 1;;
      }
       i++;
    }
    if (value != 1) {
        printf("You need to write full name \n");
        return 0;
    }
    return value;
}

int age_check (int age) {
    if (age < 0 || age > 130) {
        printf("Your number of age is not a valid. \n");
        return 0;
    }
    else if (age > 0 && age < 130) {
        printf("Your age is %d. \n", age);
        return 1;
    }
    else {
        printf("Your age includes invalid sings.  \n");
            return 0;
    }
}
int main(void) {
    char id[8];
    char name[50];
    int age;
    do {
        printf("Enter your ID-number:");
        scanf("%s",id);
    } while (id_check(id) != 1);

    do {
        printf("Enter your name:");
        scanf(" %[^\n]", name);
    } while (name_check(name) != 1);

    do {
        printf("Enter your age:");
        scanf("%d", &age);
    } while (age_check(age) != 1);

    return 0;
}
