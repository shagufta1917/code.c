#include<stdio.h>
#include<conio.h>
#include<math.h>

void algebra();  

void algebracontent() {
    int choice;
    int no1, no2;
    float result = 0.00;

    while(1) {
        
        printf("1. Operation on no. (+, -, *, / ,%) \n");
        printf("2. Play with no. (ascending, descending, even, odd)\n");
        printf("3.  array [add][mult]\n");
        printf("4. No. in Different format  . \n");
        printf("5. Exit\n");

        printf("How can I help you: \n");
        scanf("%d", &choice);

        if(choice == 5) {
            printf("Ok! Enjoy your day \n");
            break;
        }

        if (choice == 1) {
            int term;
            printf("1. Addition\n");
            printf("2. Subtraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("5. Modulo\n");

            printf("Choose your operation:\n");
            scanf("%d", &term);

            if (term == 1) {
                printf("Enter two numbers: ");
                scanf("%d %d", &no1, &no2);
                result = no1 + no2;
                printf("Result = %.2f\n", result);
            } else if (term == 2) {
                printf("Enter two numbers: ");
                scanf("%d %d", &no1, &no2);
                result = no1 - no2;
                printf("Result = %.2f\n", result);
            } else if (term == 3) {
                printf("Enter two numbers: ");
                scanf("%d %d", &no1, &no2);
                result = no1 * no2;
                printf("Result = %.2f\n", result);
            } else if (term == 4) {
                printf("Enter two numbers: ");
                scanf("%d %d", &no1, &no2);
                if (no2 != 0) {
                    result = (float)no1 / no2;
                    printf("Result = %.2f\n", result);
                } else {
                    printf("Cannot divide by zero!\n");
                }
            } else if (term == 5) {
                printf("Enter two numbers: ");
                scanf("%d %d", &no1, &no2);
                result = no1 % no2;
                printf("Result = %d\n", (int)result);  
            } else {
                printf("Invalid choice.\n");
            }
        }

        if (choice == 2) {
            int pick;
            printf("1. Ascending\n");
            printf("2. Descending\n");
            printf("3. Even no.\n");
            printf("4. Odd no.\n");

            printf("Enter your choice:\n");
            scanf("%d", &pick);

            if (pick == 1) {
                int arr[5], i, j, temp;
                printf("Enter 5 numbers: ");
                for (i = 0; i < 5; i++) {
                    scanf("%d", &arr[i]);
                }

                for (i = 0; i < 4; i++) {
                    for (j = i + 1; j < 5; j++) {
                        if (arr[i] > arr[j]) {
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }

                printf("Numbers in ascending order: ");
                for (i = 0; i < 5; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            else if (pick == 2) {
                int arr[5], i, j, temp;
                printf("Enter 5 numbers: ");
                for (i = 0; i < 5; i++) {
                    scanf("%d", &arr[i]);
                }

                for (i = 0; i < 4; i++) {
                    for (j = i + 1; j < 5; j++) {
                        if (arr[i] < arr[j]) {
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }

                printf("Numbers in descending order: ");
                for (i = 0; i < 5; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            } else if (pick == 3 || pick == 4) {
                int num;
                printf("Enter your number: ");
                scanf("%d", &num);

                if (pick == 3 && num % 2 == 0) {
                    printf("Even\n");
                } else if (pick == 4 && num % 2 != 0) {
                    printf("Odd\n");
                } else {
                    printf("Invalid number choice\n");
                }
            }
        }

        if (choice == 3) {
            int arr1[2][2], arr2[2][2], result[2][2] = {0};
            int i, j, select;
            printf("1. Addition\n");
            printf("2. Multiplication\n");
            printf("Select any one of them: ");
            scanf("%d", &select);

            if (select == 1) {
                printf("Enter elements of the first matrix (2x2):\n");
                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 2; j++) {
                        scanf("%d", &arr1[i][j]);
                    }
                }

                printf("Enter elements of the second matrix (2x2):\n");
                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 2; j++) {
                        scanf("%d", &arr2[i][j]);
                    }
                }

                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 2; j++) {
                        result[i][j] = arr1[i][j] + arr2[i][j];
                    }
                }

                printf("Result of addition:\n");
                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 2; j++) {
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
            }
            else if (select == 2) {
                printf("Matrix multiplication (2x2 with 2x2):\n");
                printf("Enter elements of the first matrix (2x2):\n");
                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 2; j++) {
                        scanf("%d", &arr1[i][j]);
                    }
                }

                printf("Enter elements of the second matrix (2x2):\n");
                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 2; j++) {
                        scanf("%d", &arr2[i][j]);
                    }
                }

                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 2; j++) {
                        for (int k = 0; k < 2; k++) {
                            result[i][j] += arr1[i][k] * arr2[k][j];
                        }
                    }
                }

                printf("Result of multiplication:\n");
                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 2; j++) {
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
            } 
        }

        if (choice == 4) {
            int tablechoice;
            printf("1. 1 to 10 tables\n");
            printf("2. sqrt\n");
            printf("3. power\n");
            printf("4. ceil\n");
            printf("5. floor\n");
            printf("Enter your choice: ");
            scanf("%d", &tablechoice);

            int i, j;

            if (tablechoice == 1) {
                for (i = 1; i <= 10; i++) {
                    for (j = 1; j <= 10; j++) {
                        printf("%d\t", i * j);  
                    }
                    printf("\n");  
                }
            } 
            else if (tablechoice == 2) {
                double num;
                printf("Enter a number to find its square root: ");
                scanf("%lf", &num);
                printf("Square root = %.2f\n", sqrt(num));
            } else if (tablechoice == 3) {
                double base, exp;
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &base, &exp);
                printf("Power = %.2f\n", pow(base, exp));
            } else if (tablechoice == 4) {
                double num;
                printf("Enter a number to find its ceiling: ");
                scanf("%lf", &num);
                printf("Ceiling = %.2f\n", ceil(num));
            } else if (tablechoice == 5) {
                double num;
                printf("Enter a number to find its floor: ");
                scanf("%lf", &num);
                printf("Floor = %.2f\n", floor(num));
            } else {
                printf("Invalid choice for tables\n");
            }
        }

        char help;
        printf("Do you want any other help (y/n)?\n ");
        scanf(" %c", &help);  
        if (help == 'n' || help == 'N') {
            
            printf("thank you. \n study well & stay focused\n ");
            break;
        }
    }
}

void algebra() {
    
    algebracontent();
}



const float pi = 3.14;

void geometrycontent() {
    int choice;
    int rad = 0;
    int l = 0, b = 0;
    float result = 0.00;
    char help;

    while(1) {
        printf("1. Perimeter\n");
        printf("2. Area\n");
        printf("3. Formulas\n");
        printf("5. Exit\n");

        printf("How can I help you? ");
        scanf("%d", &choice);

        
        if (choice < 1 || choice > 5) {
            printf("Invalid choice. Please choose between 1 and 5.\n");
            continue;  
        }

        if(choice == 5) {
            printf("Ok! Enjoy your day!\n");
            break;
        }

        if (choice == 1) {
            int term;
            printf("1. Circle\n");
            printf("2. Rectangle\n");
            printf("3. Square\n");
            printf("4. Rhombus\n");
            printf("Choose your shape: ");
            scanf("%d", &term);

            
            if (term < 1 || term > 4) {
                printf("Invalid choice. Please choose between 1 and 4.\n");
                continue;
            }

            if (term == 1) {
                printf("Enter the value of radius: ");
                scanf("%d", &rad);
                result = 2 * pi * rad;
                printf("Perimeter of Circle = %.2f\n", result);
            } else if (term == 2) {
                printf("Enter length and breadth: ");
                scanf("%d %d", &l, &b);
                result = 2 * (l + b); 
                printf("Perimeter of Rectangle = %.2f\n", result);
            } else if (term == 3) {
                printf("Enter length: ");
                scanf("%d", &l);
                result = 4 * l; 
                printf("Perimeter of Square = %.2f\n", result);
            } else if (term == 4) {
                printf("Enter side of rhombus: ");
                scanf("%d", &l);
                result = 4 * l; 
                printf("Perimeter of Rhombus = %.2f\n", result);
            }
        }

        if (choice == 2) {
            int pick;
            printf("1. Circle\n");
            printf("2. Rectangle\n");
            printf("3. Square\n");
            printf("4. Rhombus\n");
            printf("Enter your choice: ");
            scanf("%d", &pick);

            
            if (pick < 1 || pick > 4) {
                printf("Invalid choice. Please choose between 1 and 4.\n");
                continue;
            }

            if (pick == 1) {
                printf("Enter radius: ");
                scanf("%d", &rad);
                result = pi * rad * rad; 
                printf("Area of Circle = %.2f\n", result);
            } else if (pick == 2) {
                printf("Enter length and breadth: ");
                scanf("%d %d", &l, &b);
                result = l * b; 
                printf("Area of Rectangle = %.2f\n", result);
            } else if (pick == 3) {
                printf("Enter length: ");
                scanf("%d", &l);
                result = l * l; 
                printf("Area of Square = %.2f\n", result);
            } else if (pick == 4) {
                printf("Enter length and breadth: ");
                scanf("%d %d", &l, &b);
                result = l * b; 
                printf("Area of Rhombus = %.2f\n", result);
            }
        }

        if (choice == 3) {
            int select;
            printf("1. Circle\n");
            printf("2. Rectangle\n");
            printf("3. Square\n");
            printf("4. Rhombus\n");
            printf("Select a shape to see formulas: ");
            scanf("%d", &select);

            
            if (select < 1 || select > 4) {
                printf("Invalid choice. Please choose between 1 and 4.\n");
                continue;
            }

            if (select == 1) {
                printf("1. Area of Circle = pi * r * r\n");
                printf("2. Perimeter of Circle = 2 * pi * r\n");
                printf("3. Diameter of Circle = 2 * r\n");
            } else if (select == 2) {
                printf("1. Area of Rectangle = length * breadth\n");
                printf("2. Perimeter of Rectangle = 2 * (length + breadth)\n");
            } else if (select == 3) {
                printf("1. Area of Square = length * length\n");
                printf("2. Perimeter of Square = 4 * length\n");
            } else if (select == 4) {
                printf("1. Area of Rhombus = (diagonal1 * diagonal2) / 2 (not implemented in code)\n");
                printf("2. Perimeter of Rhombus = 4 * side\n");
            }
        }

        
        printf("Do you want any other help (y/n)? \n");
        scanf(" %c", &help);  
        if (help == 'n' || help == 'N') {
            printf("Thank you.\n Study well & stay focused!\n");
            break; 
        }
    }
}

void geometry() {
    geometrycontent();
}

int main() {
  int choice1;
  printf(" ----------- PLAY WITH MATH -------------\n");
  printf(" ||||||||  WELCOME TO TODAYS MATH SECION   ||||||||\n");

    printf("          1.algebra\n");
    printf("          2.geometry\n");

    printf("enter your choice : \n");
    scanf("%d",&choice1);
    if(choice1==1)
    {
        algebra();
    }
    if(choice1==2)
    {
        geometry();
    }


    getch();
}
