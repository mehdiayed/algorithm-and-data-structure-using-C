#include <stdio.h>
#include "Liste.h"

int main() {
    Liste my_list;
    initialize_liste(&my_list);

    // Adding elements to the list
    Add_Head(&my_list, 10);
    Add_Head(&my_list, 20);
    Add_Queue(my_list, 30);

    // Displaying the list
    printf("List after adding elements: ");
    Display_Liste(my_list);

    // Deleting elements from the list
    Delete_Head(&my_list);
    Delete_Queue(my_list);

    // Displaying the updated list
    printf("List after deleting elements: ");
    Display_Liste(my_list);

    // Checking if the list is empty
    if (IsEmpty_Liste(my_list)) {
        printf("The list is empty.\n");
    } else {
        printf("The list is not empty.\n");
    }

    return 0;
}
