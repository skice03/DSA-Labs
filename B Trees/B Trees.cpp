// B Trees.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#pragma warning(disable : 4996)
#include<stdio.h>
#include "B.h"

#define m 4
using namespace std;

int main() {
    int c;
    int ch;
    int keyx, key;
    NodeB* roo;
    roo = NULL;
    while (true) {
        printf("\n 1.Add");
        printf("\n 2.Delete");
        printf("\n 3.Search");
        printf("\n 4.Write");
        printf("\n 5.Exit");
        printf("\n\n");

        scanf("%d", &ch);

        switch (ch) {
        case 1:
            do {
                printf("\n create node? <0/1>");
                scanf("%d", &c);
                printf("\n");
                if (c == 1) {
                    printf("\n Enter key: ");
                    scanf("%d", &key);
                    roo = insert(key);
                }
            } while (c != 0);
            break;

        case  2:
            printf("\n Enter Key: ");
            scanf("%d", &key);
            roo = deleteKey(&roo, key);
            break;

        case 3:
            printf("Enter key to search \n");
            scanf("%d", &keyx);
            search(roo, keyx);
            break;

        case 4:
            printf("\n\n");
            displayTree(roo, 4);
            break;

        case 5:
            return(0);
        }
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
