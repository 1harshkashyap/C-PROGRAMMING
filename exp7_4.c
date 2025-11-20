#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    strcpy(addr.name, "Harsh Kashyap");
    printf("Name: %s\n", addr.name);

    strcpy(addr.hostel_address, "Room 102, B-Block, UPES Hostel");
    printf("Hostel Address: %s\n", addr.hostel_address);

    strcpy(addr.city, "Dehradun");
    printf("City: %s\n", addr.city);

    strcpy(addr.state, "Uttarakhand");
    printf("State: %s\n", addr.state);

    strcpy(addr.zip, "248007");
    printf("ZIP: %s\n", addr.zip);

    printf("\nPresent Address:\n");
    printf("%s, %s, %s - %s\n", addr.hostel_address, addr.city, addr.state, addr.zip);

    return 0;
}
