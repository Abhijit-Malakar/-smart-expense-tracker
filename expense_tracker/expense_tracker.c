#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct Expense {
    int id;
    float amount;
    char description[100];
    char category[50];
};

struct Expense expenses[MAX];
int count = 0;


void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}


void detectCategory(char desc[], char category[]) {
    char temp[120];

    
    sprintf(temp, " %s ", desc);
    toLowerCase(temp);

    
if (strstr(temp, " pizza ") || strstr(temp, " burger ") ||
    strstr(temp, " sandwich ") || strstr(temp, " bread ") ||

    strstr(temp, " rice ") || strstr(temp, " dal ") ||
    strstr(temp, " roti ") || strstr(temp, " naan ") ||
    strstr(temp, " paratha ") || strstr(temp, " sabzi ") ||
    strstr(temp, " curry ") || strstr(temp, " paneer ") ||
    strstr(temp, " thali ") ||

    strstr(temp, " dosa ") || strstr(temp, " idli ") ||
    strstr(temp, " vada ") || strstr(temp, " sambar ") ||
    strstr(temp, " uttapam ") ||

    strstr(temp, " pani puri ") || strstr(temp, " golgappa ") ||
    strstr(temp, " phuchka ") || strstr(temp, " bhel ") ||
    strstr(temp, " sev puri ") || strstr(temp, " pav bhaji ") ||
    strstr(temp, " vada pav ") || strstr(temp, " samosa ") ||
    strstr(temp, " kachori ") || strstr(temp, " chaat ") ||
    strstr(temp, " roll ") || strstr(temp, " frankie ") ||
    strstr(temp, " momo ") || strstr(temp, " chowmein ") ||
    strstr(temp, " noodles ") ||

    strstr(temp, " maggi ") || strstr(temp, " pasta ") ||
    strstr(temp, " chips ") || strstr(temp, " biscuit ") ||
    strstr(temp, " namkeen ") || strstr(temp, " snacks ") ||

    strstr(temp, " rasgulla ") || strstr(temp, " gulab jamun ") ||
    strstr(temp, " jalebi ") || strstr(temp, " laddu ") ||
    strstr(temp, " peda ") || strstr(temp, " barfi ") ||
    strstr(temp, " halwa ") || strstr(temp, " kheer ") ||


    strstr(temp, " cake ") || strstr(temp, " pastry ") ||
    strstr(temp, " chocolate ") || strstr(temp, " ice cream ") ||
    strstr(temp, " brownie ") || strstr(temp, " muffin ") ||

    strstr(temp, " chai ") || strstr(temp, " tea ") ||
    strstr(temp, " coffee ") || strstr(temp, " lassi ") ||
    strstr(temp, " juice ") || strstr(temp, " shake ") ||
    strstr(temp, " milk ") || strstr(temp, " cola ") ||
    strstr(temp, " cold drink ") ||

    
    strstr(temp, " egg ") || strstr(temp, " omelette ") ||
    strstr(temp, " chicken ") || strstr(temp, " mutton ") ||
    strstr(temp, " fish ") || strstr(temp, " kebab ") ||


    strstr(temp, " breakfast ") || strstr(temp, " lunch ") ||
    strstr(temp, " dinner ") || strstr(temp, " tiffin ") ||
    strstr(temp, " food ")||// 


    strstr(temp, " pizza ") || strstr(temp, " burger ") ||
    strstr(temp, " fries ") || strstr(temp, " sandwich ") ||
    strstr(temp, " hotdog ") || strstr(temp, " taco ") ||
    strstr(temp, " burrito ") || strstr(temp, " wrap ") ||


    strstr(temp, " noodles ") || strstr(temp, " chowmein ") ||
    strstr(temp, " fried rice ") || strstr(temp, " manchurian ") ||
    strstr(temp, " spring roll ") ||

    strstr(temp, " pasta ") || strstr(temp, " spaghetti ") ||
    strstr(temp, " lasagna ") || strstr(temp, " macaroni ") ||

    strstr(temp, " sushi ") || strstr(temp, " ramen ") ||
    strstr(temp, " kimchi ") ||

    strstr(temp, " rice ") || strstr(temp, " dal ") ||
    strstr(temp, " roti ") || strstr(temp, " naan ") ||
    strstr(temp, " paratha ") || strstr(temp, " sabzi ") ||
    strstr(temp, " curry ") || strstr(temp, " paneer ") ||
    strstr(temp, " khichdi ") || strstr(temp, " pulao ") ||
    strstr(temp, " rajma ") || strstr(temp, " chole ") ||

    strstr(temp, " dosa ") || strstr(temp, " idli ") ||
    strstr(temp, " vada ") || strstr(temp, " sambar ") ||
    strstr(temp, " uttapam ") ||

    strstr(temp, " pani puri ") || strstr(temp, " golgappa ") ||
    strstr(temp, " phuchka ") || strstr(temp, " bhel ") ||
    strstr(temp, " sev puri ") || strstr(temp, " pav bhaji ") ||
    strstr(temp, " vada pav ") || strstr(temp, " samosa ") ||
    strstr(temp, " kachori ") || strstr(temp, " chaat ") ||
    strstr(temp, " roll ") || strstr(temp, " frankie ") ||
    strstr(temp, " momo ") ||

    strstr(temp, " kathi roll ") || strstr(temp, " egg roll ") ||

    strstr(temp, " maggi ") || strstr(temp, " chips ") ||
    strstr(temp, " biscuit ") || strstr(temp, " namkeen ") ||

    strstr(temp, " rasgulla ") || strstr(temp, " gulab jamun ") ||
    strstr(temp, " jalebi ") || strstr(temp, " laddu ") ||
    strstr(temp, " peda ") || strstr(temp, " barfi ") ||
    strstr(temp, " halwa ") || strstr(temp, " kheer ") ||
    strstr(temp, " sandesh ") ||

    strstr(temp, " cake ") || strstr(temp, " pastry ") ||
    strstr(temp, " chocolate ") || strstr(temp, " ice cream ") ||
    strstr(temp, " brownie ") || strstr(temp, " muffin ") ||
    strstr(temp, " donut ") || strstr(temp, " waffle ") ||

    strstr(temp, " chai ") || strstr(temp, " tea ") ||
    strstr(temp, " coffee ") || strstr(temp, " lassi ") ||
    strstr(temp, " juice ") || strstr(temp, " shake ") ||
    strstr(temp, " milk ") || strstr(temp, " cola ") ||
    strstr(temp, " cold drink ") || strstr(temp, " smoothie ") ||

    strstr(temp, " egg ") || strstr(temp, " omelette ") ||
    strstr(temp, " chicken ") || strstr(temp, " mutton ") ||
    strstr(temp, " fish ") || strstr(temp, " kebab ") ||
    strstr(temp, " tandoori ") || strstr(temp, " biryani ") ||

    strstr(temp, " breakfast ") || strstr(temp, " lunch ") ||
    strstr(temp, " dinner ") || strstr(temp, " tiffin ") ||
    strstr(temp, " food "))
{

    strcpy(category, "Food");
}

    
     
else if (strstr(temp, " bus ") || strstr(temp, " train ") ||
         strstr(temp, " flight ") || strstr(temp, " taxi ") ||
         strstr(temp, " cab ") || strstr(temp, " auto ") ||
         strstr(temp, " toto ") || strstr(temp, " rickshaw ") ||
         strstr(temp, " uber ") || strstr(temp, " ola ") ||
         strstr(temp, " metro ") || strstr(temp, " ticket ") ||

         
         strstr(temp, " petrol ") || strstr(temp, " diesel ") ||
         strstr(temp, " fuel ") || strstr(temp, " ev ") ||
         strstr(temp, " charging ") ||

         
         strstr(temp, " trip ") || strstr(temp, " journey ") ||
         strstr(temp, " tour ") || strstr(temp, " ride ") ||

         
         strstr(temp, " e-rickshaw ") || strstr(temp, " shared auto ") ||
         strstr(temp, " local train ") || strstr(temp, " express ") ||
         strstr(temp, " sleeper ") || strstr(temp, " platform ") ||

         
         strstr(temp, " toll ") || strstr(temp, " parking ") ||

         
         strstr(temp, " station ") || strstr(temp, " airport ") ||
         strstr(temp, " bus stand ") ||

         
         strstr(temp, " sikkim ") || strstr(temp, " darjeeling ") ||
         strstr(temp, " kolkata ") || strstr(temp, " delhi ") ||
         strstr(temp, " mumbai ") ||

         strstr(temp, " travel ")) {

    strcpy(category, "Travel");
}

    
    else {
        strcpy(category, "Other");
    }
}

// Add Expense
void addExpense() {
    if (count >= MAX) {
        printf("\nStorage Full!\n");
        return;
    }

    expenses[count].id = count + 1;

    printf("\nEnter Amount: ");
    scanf("%f", &expenses[count].amount);

    printf("Enter Description: ");
    scanf(" %[^\n]", expenses[count].description);

    detectCategory(expenses[count].description, expenses[count].category);

    printf("Detected Category: %s\n", expenses[count].category);

    count++;

    printf("Expense Added Successfully!\n");
}


void viewExpenses() {
    if (count == 0) {
        printf("\nNo Expenses Found!\n");
        return;
    }

    printf("\n------ Expense List ------\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Amount: %.2f | Desc: %s | Category: %s\n",
               expenses[i].id,
               expenses[i].amount,
               expenses[i].description,
               expenses[i].category);
    }
}


void totalExpense() {
    float total = 0;

    for (int i = 0; i < count; i++) {
        total += expenses[i].amount;
    }

    printf("\nTotal Expense: %.2f\n", total);
}


void categoryWise() {
    float food = 0, travel = 0, other = 0;

    for (int i = 0; i < count; i++) {
        if (strcmp(expenses[i].category, "Food") == 0)
            food += expenses[i].amount;
        else if (strcmp(expenses[i].category, "Travel") == 0)
            travel += expenses[i].amount;
        else
            other += expenses[i].amount;
    }

    printf("\n--- Category-wise Expense ---\n");
    printf("Food: %.2f\n", food);
    printf("Travel: %.2f\n", travel);
    printf("Other: %.2f\n", other);
}


int main() {
    int choice;

    while (1) {
        printf("\n===== Smart Expense Tracker =====\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Total Expense\n");
        printf("4. Category-wise Expense\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addExpense();
                break;
            case 2:
                viewExpenses();
                break;
            case 3:
                totalExpense();
                break;
            case 4:
                categoryWise();
                break;
            case 5:
                printf("\nThank you for using the program!\n");
                exit(0);
            default:
                printf("\nInvalid Choice! Try Again.\n");
        }
    }

    return 0;
}