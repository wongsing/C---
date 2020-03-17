#include <stdio.h>
#include "addrlist.h"

static char name[MAX_ADDRESS][NAME_LENGTH];
static char address[MAX_ADDRESS][ADDR_LENGTH];
static char phone[MAX_ADDRESS][PHONE_LENGTH];

static int
find_entry(char const*name_to_find)
{
	int entry;
	for(entry = 0; entry < MAX_ADDRESS;entry += 1 )
		if(strcmp(name_to_find,name[entry]) == 0 )
			return entry;
			
	return -1;
}

char const*
lookup_address(char const *name)
{
	int entry ;
	entry = find_entry(name);
	if(entry == -1 )
		return NULL;
	else
		return address[entry];
		
}

char const *
lookup_phone(char const *name)
{
	int entry ;
	
	entry = find_entry(name);
	if(entry == -1)
		return NULL;
	else
		return phone[ entry];
}

int main()
{
	
	char a[100]="wxy";
	printf("%s\n",lookup_phone(a));
	return 0;
	
}

