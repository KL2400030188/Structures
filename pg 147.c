#include <stdio.h>
struct hotel 
{
    char name[20];
    char address[50];
    float rating;
    long int room_charge;
    int no_of_rooms;
};
int main()
{
	struct hotel h;
	printf("enter hotel name: ");
	scanf("%s",h.name);
	printf("Enter hotel address: ");
    scanf(" %[^\n]s", h.address);  
    printf("Enter hotel rating (out of 5): ");
    scanf("%f", &h.rating);
    printf("Enter room charge: ");
    scanf("%ld", &h.room_charge);
    printf("Enter number of rooms: ");
    scanf("%d", &h.no_of_rooms);
    
    printf("\nHotel Details:\n");
    printf("Name: %s\n", h.name);
    printf("Address: %s\n", h.address);
    printf("Rating: %.1f\n", h.rating);
    printf("Room Charge: %ld\n", h.room_charge);
    printf("Number of Rooms: %d\n", h.no_of_rooms);
   
    return 0;
}