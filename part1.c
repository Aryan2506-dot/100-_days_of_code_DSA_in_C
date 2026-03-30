#include <stdio.h>
#include <string.h>

#define MAX 100

/* Structure to store student record */
struct Student
{
    int id;
    char name[50];
    float marks;
};

/* 1. Store N student records */
void inputStudents(struct Student arr[], int n)
{
    int i;
    printf("\n--- Enter Student Details ---\n");
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        printf("  Student ID   : ");
        scanf("%d", &arr[i].id);

        /* clear leftover newline from buffer before fgets */
        getchar();

        printf("  Student Name : ");
        fgets(arr[i].name, 50, stdin);

        /* remove newline character that fgets adds at end */
        arr[i].name[strcspn(arr[i].name, "\n")] = 0;

        printf("  Marks        : ");
        scanf("%f", &arr[i].marks);
    }
}

/* a) Display all student records */
void displayAll(struct Student arr[], int n)
{
    int i;
    printf("\n--- All Student Records ---\n");
    for (i = 0; i < n; i++)
    {
        printf("\nRecord %d:\n", i + 1);
        printf("  Student ID   : %d\n", arr[i].id);
        printf("  Student Name : %s\n", arr[i].name);
        printf("  Marks        : %f\n", arr[i].marks);
    }
}

/* b) Find student with highest marks */
void findHighest(struct Student arr[], int n)
{
    int i;
    int maxIdx = 0;

    for (i = 1; i < n; i++)
    {
        if (arr[i].marks > arr[maxIdx].marks)
        {
            maxIdx = i;
        }
    }

    printf("\n--- Student with Highest Marks ---\n");
    printf("  Student ID   : %d\n", arr[maxIdx].id);
    printf("  Student Name : %s\n", arr[maxIdx].name);
    printf("  Marks        : %f\n", arr[maxIdx].marks);
}

/* c) Search student by Student ID */
void searchByID(struct Student arr[], int n, int key)
{
    int i;
    int found = 0;

    for (i = 0; i < n; i++)
    {
        if (arr[i].id == key)
        {
            printf("\n--- Student Found ---\n");
            printf("  Student ID   : %d\n", arr[i].id);
            printf("  Student Name : %s\n", arr[i].name);
            printf("  Marks        : %f\n", arr[i].marks);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\n  Student with ID %d not found.\n", key);
    }
}

/* Main Function */
int main()
{
    struct Student arr[MAX];
    int n, choice, sid;
  printf("   STUDENT RECORD MANAGEMENT SYSTEM        \n");
    printf("   Part A - Array Implementation           \n");
   
    printf("\nEnter number of students: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX)
    {
        printf("Invalid number. Exiting.\n");
        return 1;
    }

    inputStudents(arr, n);

    int running = 1;
    while (running)
    {
        printf("\n========== MENU ==========\n");
        printf("1. Display All Records\n");
        printf("2. Find Student with Highest Marks\n");
        printf("3. Search Student by ID\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displayAll(arr, n);
                break;

            case 2:
                findHighest(arr, n);
                break;

            case 3:
                printf("Enter Student ID to search: ");
                scanf("%d", &sid);
                searchByID(arr, n, sid);
                break;

            case 4:
                running = 0;
                printf("\nExiting program.\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}