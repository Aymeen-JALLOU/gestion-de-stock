#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_DESCRIPTION_LENGTH 100
#define MAX_PRODUCTS 100
#define FILENAME_PRODUCTS "products.csv"
#define FILENAME_USERS "users.csv"

// Structure de données pour un produit
typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    char description[MAX_DESCRIPTION_LENGTH];
    float price;
} Product;

// Structure de données pour un utilisateur
typedef struct {
    char name[MAX_NAME_LENGTH];
} User;

// Fonction pour ajouter un produit
void addProduct(Product products[], int *count) {
    printf("Enter product details:\n");
    printf("Name: ");
    scanf("%s", products[*count].name);
    printf("Description: ");
    scanf("%s", products[*count].description);
    printf("Price: ");
    scanf("%f", &products[*count].price);
    products[*count].id = *count + 1;
    (*count)++;
}

// Fonction pour afficher la liste des produits
void displayProducts(Product products[], int count) {
    printf("Product List:\n");
    printf("ID\tName\tDescription\tPrice\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%s\t%.2f\n", products[i].id, products[i].name, products[i].description, products[i].price);
    }
}

// Fonction pour modifier un produit
void modifyProduct(Product products[], int count) {
    int id;
    printf("Enter the ID of the product you want to modify: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (products[i].id == id) {
            printf("Enter new details for the product:\n");
            printf("Name: ");
            scanf("%s", products[i].name);
            printf("Description: ");
            scanf("%s", products[i].description);
            printf("Price: ");
            scanf("%f", &products[i].price);
            printf("Product modified successfully.\n");
            return;
        }
    }
    printf("Product with ID %d not found.\n", id);
}

// Fonction pour supprimer un produit
void deleteProduct(Product products[], int *count) {
    int id;
    printf("Enter the ID of the product you want to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < *count; i++) {
        if (products[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                products[j] = products[j + 1];
            }
            (*count)--;
            printf("Product deleted successfully.\n");
            return;
        }
    }
    printf("Product with ID %d not found.\n", id);
}

// Fonction principale
int main() {
    Product products[MAX_PRODUCTS];
    User user;

    int productCount = 0;

    // Interface utilisateur
    printf("Welcome to Stock Management System\n");
    printf("Enter your name: ");
    scanf("%s", user.name);

    int choice;
    do {
        printf("\n1. Add Product\n");
        printf("2. Modify Product\n");
        printf("3. Delete Product\n");
        printf("4. Display Products\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct(products, &productCount);
                break;
            case 2:
                modifyProduct(products, productCount);
                break;
            case 3:
                deleteProduct(products, &productCount);
                break;
            case 4:
                displayProducts(products, productCount);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

