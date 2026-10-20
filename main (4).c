
#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    
    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);
    date[strcspn(date, "\n")] = '\0';

    char mm[3];
    mm[0] = date[3];
    mm[1] = date[4];
    mm[2] = '\0';
    
   
    for (int i = 0; i < 2; i++) {
        printf("%c", date[i]);
    }
    
    printf("-");
    
      if (strcmp(mm, "01") == 0) printf("Jan");
    else if (strcmp(mm, "02") == 0) printf("Feb");
    else if (strcmp(mm, "03") == 0) printf("Mar");
    else if (strcmp(mm, "04") == 0) printf("Apr");
    else if (strcmp(mm, "05") == 0) printf("May");
    else if (strcmp(mm, "06") == 0) printf("Jun");
    else if (strcmp(mm, "07") == 0) printf("Jul");
    else if (strcmp(mm, "08") == 0) printf("Aug");
    else if (strcmp(mm, "09") == 0) printf("Sep");
    else if (strcmp(mm, "10") == 0) printf("Oct");
    else if (strcmp(mm, "11") == 0) printf("Nov");
    else if (strcmp(mm, "12") == 0) printf("Dec");
    
    printf("-");
    
   
    for (int i = 6; date[i] != '\0'; i++) {
        printf("%c", date[i]);
    }
    printf("\n");
    
    return 0;
}

//without string.h 


#include <stdio.h>

int main() {
    char date[20];
    
    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);
    
        for (int i = 0; date[i] != '\0'; i++) {
        if (date[i] == '\n') {
            date[i] = '\0';
            break;
        }
    }
    
     char mm[3];
    mm[0] = date[3];
    mm[1] = date[4];
    mm[2] = '\0';
    

    for (int i = 0; i < 2; i++) {
        printf("%c", date[i]);
    }
    
    printf("-");
    
    if (mm[0] == '0' && mm[1] == '1') printf("Jan");
    else if (mm[0] == '0' && mm[1] == '2') printf("Feb");
    else if (mm[0] == '0' && mm[1] == '3') printf("Mar");
    else if (mm[0] == '0' && mm[1] == '4') printf("Apr");
    else if (mm[0] == '0' && mm[1] == '5') printf("May");
    else if (mm[0] == '0' && mm[1] == '6') printf("Jun");
    else if (mm[0] == '0' && mm[1] == '7') printf("Jul");
    else if (mm[0] == '0' && mm[1] == '8') printf("Aug");
    else if (mm[0] == '0' && mm[1] == '9') printf("Sep");
    else if (mm[0] == '1' && mm[1] == '0') printf("Oct");
    else if (mm[0] == '1' && mm[1] == '1') printf("Nov");
    else if (mm[0] == '1' && mm[1] == '2') printf("Dec");
    
    printf("-");
    
      for (int i = 6; date[i] != '\0'; i++) {
        printf("%c", date[i]);
    }
    printf("\n");
    
    return 0;
}