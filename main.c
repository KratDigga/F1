#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"

int main(void) {

  struct Contact contact = { {'\0','\0','\0'}, {0, 0, '\0', '\0', '\0'}, {'\0','\0','\0'} };

  getName(&contact.name);
  getAddress(&contact.address);
  getNumbers(&contact.numbers);

	printf("Contact Management System\n");
	printf("-------------------------\n");

// Contact Summary

printf("Contact Details\n");
printf("---------------\n");
//Name Display
	printf("Name Details:\n");
	  printf("First name: %s\n", contact.name.firstName);
	    if (contact.name.middleInitial[0] != '\0') {
		    printf("Middle initial(s): %s\n", contact.name.middleInitial);
	    }
	        printf("Last name: %s\n\n", contact.name.lastName);
//Address Display
	          printf("Address Details:\n");
	            printf("Street number: %d\n", contact.address.streetNumber);
	              printf("Street name: %s\n", contact.address.streetName);
	            if (contact.address.apartmentNumber != 0) {
	        	printf("Apartment: %d\n", contact.address.apartmentNumber);
	            }
	        printf("Postal code: %s\n", contact.address.postalCode);
	      printf("City: %s\n\n", contact.address.city);
//Numbers Display
    	printf("Phone Numbers:\n");
	  if (contact.numbers.cellPhone[0] != 0) {
	printf("Cell phone number: %s\n", contact.numbers.cellPhone);
	  }
if (contact.numbers.homePhone[0] != 0) {
	printf("Home phone number: %s\n", contact.numbers.homePhone);
}	
	  if (contact.numbers.businessPhone[0] != 0) {
	  	printf("Business phone number: %s\n", contact.numbers.businessPhone);
  	}
        printf("\n");
	        printf("Structure test for Contact using functions done!\n");

  return 0;
}
