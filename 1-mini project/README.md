#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct rrs {
	char name[20];
	char gender[6];
	char nat[20];
	char BP[15];
	int age;
	struct rrs* link;
} rrsp;

rrsp* start = NULL;

void pass_info(int);
int seat(int);
int calculation(int, int, int);
void receipt(int, int);
void ptr(char va[20], char gen[6], char na[20], char bi[15], int b);

char boarding[20], destination[20], train[40];
char train_num[40], class[40];
int HH, MM, a[55];

void main()
{
	int i, j, a1, a2, b, c, x = 0, d, e, r;
	char o;
	printf("Enter Number Of Passenger(s): ");
	fflush(stdin);
	scanf("%d", &j);

	pass_info(j);
	printf("Enter Boarding Station: ");
	fflush(stdin);
	gets(boarding);
	printf("Enter Destination Station: ");
	gets(destination);
	printf("\tAvailable Trains:\n");
	printf("\t\tS.no. Name of Train      Arraival   Train no:\n");
	printf("\t\t1.    Anantapuri Express 03:00 AM   23148\n");
	printf("\t\t2.    Chemmozhi Express  06:30 AM   22156\n");
	printf("\t\t3.    Cheran Express     10:00 AM   68945\n");
	printf("\t\t4.    Cholan Express     04:00 PM   78542\n");
	printf("\t\t5.    Pandiyan Express   05:40 PM   94681\n");
	printf("\t\t6.    Pothigai Express   09:15 PM   12543\n");

	scanf("%d", &i);
	do {
		switch (i) {
		case 1: {
			strcpy(train,
				"Anantapuri Express");
			strcpy(train_num,
				"23148");
			HH = 03;
			MM = 00;
			a1 = 2099;
			a2 = 1560;

			d = calculation(a1, a2, j);
			printf("Total Amount:"
				" %d\n",
				d);
		}; break;
		case 2: {
			strcpy(train,
				"Chemmozhi Express");
			strcpy(train_num,
				"22156");
			HH = 06;
			MM = 30;
			a1 = 1801;
			a2 = 981;

			d = calculation(a1, a2, j);
			printf("Total Amount:"
				"%d\n",
				d);
		}; break;
		case 3: {
			strcpy(train,
				"Cheran Express");
			strcpy(train_num,
				"68945");
			HH = 10;
			MM = 00;
			a1 = 2199;
			a2 = 1780;

			d = calculation(a1, a2, j);
			printf("Total Amount: %d\n", d);
		}; break;
		case 4: {
			strcpy(train, "Cholan Express");
			strcpy(train_num, "78542");
			HH = 16;
			MM = 00;
			a1 = 1759;
			a2 = 1200;

			d = calculation(a1, a2, j);
			printf("Total Amount: %d\n", d);
		}; break;
		case 5: {
			strcpy(train, "Pandiyan Express");
			strcpy(train_num, "94681");
			HH = 17;
			MM = 40;
			a1 = 2205;
			a2 = 1905;

			d = calculation(a1, a2, j);
			printf("Total Amount: %d\n", d);
		}; break;
		case 6: {
			strcpy(train, "Pothigai Express");
			strcpy(train_num, "12543");
			HH = 21;
			MM = 15;
			a1 = 2505;
			a2 = 2105;

			d = calculation(a1, a2, j);
			printf("Total Amount: %d\n", d);
		}; break;
		default:
			printf("Choose from available trains\n");
			x = 1;
			break;
		}
	} while (x);

	printf("Seat allotment:\n");

	seat(j);

	receipt(d, j);
}

int calculation(int y1, int y2, int h)
{
	int b, c, i, t, r, n;
	printf("\t\tEnter the Type of Class:\n");
	printf("\t\t1. 2S\n");
	printf("\t\t2. SL\n");
	printf("\t\t3. CC\n");
	printf("\t\t4. 3A\n");
	printf("\t\t5. 2A\n");
	printf("\t\t6. 1A\n");
	scanf("%d", &i);
	switch (i) {
	case 1: {
		strcpy(class, "Second Class");
		b = y2 * h;
		c = b + (b * 0.18);
	} break;
	case 2: {
		strcpy(class, "Sleeper Class");
		b = (y2 + 600) * h;
		c = b + (b * 0.18);
	} break;
	case 3: {
		strcpy(class, "AC Chair Class");
		b = y1 * h;
		c = b + (b * 0.18);
	} break;
	case 4: {
		strcpy(class, "3A Three-Tier AC");
		b = (y1 + 1000) * h;
		c = b + (b * 0.18);
	} break;
	case 5: {
		strcpy(class, "2A Two-Tier AC");
		b = (y1 + 2000) * h;
		c = b + (b * 0.18);
	} break;
	case 6: {
		strcpy(class, "1A First Class AC");
		b = (y1 + 5000) * h;
		c = b + (b * 0.18);
	} break;
		
	default: {
		printf("\t\tPlease Choose Available Class\n");
	}
	}
	return c;
}

void pass_info(int k)
{
	int i, a;
	char val[20], gender[6], nat[20], BP[15];
	for(i = 1; i <= k; i++) {
		if(i==1){
		printf("Enter The %dst Passenger Name: ", i);
		fflush(stdin);
		gets(val);
		printf("Enter The %dst Passenger Gender: ", i);
		fflush(stdin);
		gets(gender);
		printf("Enter The %dst Passenger Nationality: ", i);
		fflush(stdin);
		gets(nat);
		printf("Enter The %dst Passenger Berth Preference: ", i);
		fflush(stdin);
		gets(BP);
		printf("Enter The %dst Passenger Age: ", i);
		fflush(stdin);
		scanf("%d", &a);
		}
		else if(i==2){
		printf("Enter The %dnd Passenger Name: ", i);
		fflush(stdin);
		gets(val);
		printf("Enter The %dnd Passenger Gender: ", i);
		fflush(stdin);
		gets(gender);
		printf("Enter The %dnd Passenger Nationality: ", i);
		fflush(stdin);
		gets(nat);
		printf("Enter The %dnd Passenger Berth Preference: ", i);
		fflush(stdin);
		gets(BP);
		printf("Enter The %dnd Passenger Age: ", i);
		fflush(stdin);
		scanf("%d", &a);
		}
		else if(i==3){
		printf("Enter The %drd Passenger Name: ", i);
		fflush(stdin);
		gets(val);
		printf("Enter The %drd Passenger Gender: ", i);
		fflush(stdin);
		gets(gender);
		printf("Enter The %drd Passenger Nationality: ", i);
		fflush(stdin);
		gets(nat);
		printf("Enter The %drd Passenger Berth Preference: ", i);
		fflush(stdin);
		gets(BP);
		printf("Enter The %drd Passenger Age: ", i);
		fflush(stdin);
		scanf("%d", &a);
		}
		else
		{
		printf("Enter The %dth Passenger Name: ", i);
		fflush(stdin);
		gets(val);
		printf("Enter The %dth Passenger Gender: ", i);
		fflush(stdin);
		gets(gender);
		printf("Enter The %dth Passenger Nationality: ", i);
		fflush(stdin);
		gets(nat);
		printf("Enter The %dth Passenger Berth Preference: ", i);
		fflush(stdin);
		gets(BP);
		printf("Enter The %dth Passenger Age: ", i);
		fflush(stdin);
		scanf("%d", &a);
		}
		ptr(val, gender, nat, BP, a);
	}
}

void ptr(char va[20], char gen[6], char na[20], char bi[15], int b)
{
	rrsp *newptr = NULL, *ptr;
	newptr = (rrsp*)malloc(sizeof(rrsp));
	strcpy(newptr->name, va);
	strcpy(newptr->gender, gen);
	strcpy(newptr->nat, na);
	strcpy(newptr->BP, bi);
	newptr->age = b;
	newptr->link = NULL;
	if (start == NULL)
		start = newptr;
	else {
		ptr = start;
		while (ptr->link != NULL)
			ptr = ptr->link;
		ptr->link = newptr;
	}
}

int seat(int p)
{
	int i, sa=01, sb=02,sc=03, sd=04, se=05;
	printf("\t----------AVAILABLE SEATS---------- \n");
	printf("\t(U) (L)\t\t(L)\t(M)\t(U)\n\n"); 
	for(int x=1; x<13; x++){
        printf("\t%02d  %02d\t\t%02d\t%02d\t%02d\n", sa, sb,sc, sd, se);
        if(x==1||x==11||x%2!=0){
        printf("\n");
        }
	     sa= sa+5, sb= sb+5,sc=sc+5, sd= sd+5, se= se+5;
	}
	printf("\t-----------------------------------\n");
	printf("\tEnter Seat Number(s): \n");
	for (i = 0; i < p; i++)
		scanf("%d", &a[i]);
}

void receipt(int y, int j)
{
	int i;
	rrsp* ptr = start;
	for (i = 1; i <= j; i++) {
		if(i==1)
		{
		printf("\t\t%dst Passenger Name: ", i);
		puts(ptr->name);
		printf("\t\t%dst Passenger Gender: ", i);
		puts(ptr->gender);
		printf("\t\t%dst Passenger Nationality: ", i);
		puts(ptr->nat);
		printf("\t\t%dst Passenger Birth Preference: ", i);
		puts(ptr->BP);
		printf("\t\t%dst Passenger Age: %d\n\n", i,
			ptr->age);
		ptr = ptr->link;
		}
		else if(i==2)
		{
		printf("\t\t%dnd Passenger Name: ", i);
		puts(ptr->name);
		printf("\t\t%dnd Passenger Gender: ", i);
		puts(ptr->gender);
		printf("\t\t%dnd Passenger Nationality: ", i);
		puts(ptr->nat);
		printf("\t\t%dnd Passenger Birth Preference: ", i);
		puts(ptr->BP);
		printf("\t\t%dnd Passenger Age: %d\n\n", i,
			ptr->age);
		ptr = ptr->link;
		}
		else if(i==3)
		{
		printf("\t\t%drd Passenger Name: ", i);
		puts(ptr->name);
		printf("\t\t%drd Passenger Gender: ", i);
		puts(ptr->gender);
		printf("\t\t%drd Passenger Nationality: ", i);
		puts(ptr->nat);
		printf("\t\t%drd Passenger Birth Preference: ", i);
		puts(ptr->BP);
		printf("\t\t%drd Passenger Age: %d\n\n", i,
			ptr->age);
		ptr = ptr->link;
		}
		else
		{
		printf("\t\t%dth Passenger Name: ", i);
		puts(ptr->name);
		printf("\t\t%dth Passenger Gender: ", i);
		puts(ptr->gender);
		printf("\t\t%dth Passenger Nationality: ", i);
		puts(ptr->nat);
		printf("\t\t%dth Passenger Birth Preference: ", i);
		puts(ptr->BP);
		printf("\t\t%dth Passenger Age: %d\n\n", i,
			ptr->age);
		ptr = ptr->link;
		}
	}
	printf("\t\tBoarding Station: ");
	puts(boarding);
	printf("\t\tDestination Station: ");
	puts(destination);
	printf("\t\tTrain Number: ");
	puts(train_num);
	printf("\t\tTrain Name: ");
	puts(train);
	printf("\t\tAllocated Class: ");
	puts(class);
	printf("\t\tBoarding Time: %02d:%02d\n", HH, MM);
	printf("\t\tTotal  Amount: %d\n", y);
	printf("\t\tAllocated Seats Are: \n");
	for (i = 0; i < j; i++) {
		printf("\t\t%02d ", a[i]);
	}
	printf("\n");
	printf("\t\tThank you for booking\n\t\tHappy Journey\n");
}
