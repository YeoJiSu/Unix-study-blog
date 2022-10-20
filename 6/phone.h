// array of sturcure

# define MAX 50

typedef struct contact_st
{
    char Name[10];
    char PhoneNumber[13];
} Contact;

Contact PhoneBook[MAX];


int size;  // store the actual numbers of PhoneBook
