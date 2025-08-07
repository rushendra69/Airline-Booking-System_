#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int c, x;
int pmt()
{
    int card, cvv, upi, bank, bill, payment, msr;
    char login;
    char id;
    char holder;
    char validity;
    if (c == 1)
    {
        printf("\nTHE AMOUNT IS 4000 RS\n");
    }
    else if (c == 2)
    {
        printf("THE AMOUNT IS 2000 RS\n");
    }
    printf("************************************");
    printf("\nSELECT ONE OF THE PAYMENT OPTIONS\n");
    printf("1)CREDIT/DEBIT CARD\n2)UPI\n3)NET BANKING: ");
    scanf("%d", &msr);

    switch (msr)
    {
    case 1:
        printf("\nCARD NUMBER: ");
        scanf("%d", &card);
        printf("\nNAME OF THE CARD HOLDER: ");
        scanf("%s", &holder);
        printf("\nVALIDITY (MM/YY): ");
        scanf("%s", &validity);
        printf("\nCVV: ");
        scanf("%d", &cvv);
    pay:
        if (c == 1)
        {
            printf("THE AMOUNT NEED TO PAID IS 4000");
            printf("\nENTER THE AMOUNT HERE:");
            scanf("%d", &x);
            if (x < 4000 || x > 4000)
            {
                printf("INVALID AMOUNT");
                goto pay;
            }
            else if (x == 4000)
            {
                printf("PAYMENT SUCCESSFUL");
            }
        }
        else if (c == 2)
        {
            printf("THE AMOUNT NEED TO PAID IS 2000 RS\n");
            printf("\nENTER THE AMOUNT HERE:");
            scanf("%d", &x);
            if (x < 2000 || x > 2000)
            {
                printf("INVALID AMOUNT");
                goto pay;
            }
            else if (x == 4000)
            {
                printf("PAYMENT SUCCESSFUL");
            }
        }

        break;

    case 2:
        printf("\nENTER UPI ID:");
        scanf("%s", &id);
        printf("\nOPEN THE UPI MOBILE APP AND APPROVE THE PAYMENT\n");
    pay2:
        if (c == 1)
        {
            printf("THE AMOUNT NEED TO PAID IS 4000 RS:");
            printf("\nENTER THE AMOUNT HERE:");
            scanf("%d", &x);
            if (x < 4000 || x > 4000)
            {
                printf("INVALID AMOUNT");
                goto pay2;
            }
            else if (x == 4000)
            {
                printf("PAYMENT SUCCESSFUL");
            }
        }
        else if (c == 2)
        {
            printf("THE AMOUNT NEED TO PAID IS 2000 RS:");
            printf("\nENTER THE AMOUNT HERE");
            scanf("%d", &x);
            if (x < 2000 || x > 2000)
            {
                printf("INVALID AMOUNT");
                goto pay2;
            }
            else if (x == 4000)
            {
                printf("PAYMENT SUCCESSFUL");
            }
        }

        break;

    case 3:
        printf("\nSELECT ONE OF THE BANK");
        printf("\n1)AXIS BANK\n2)HDFC BANK\n3)ICIC BANK\n4)SBI BANK\n5)KOTAK BANK: ");
        scanf("%d", &bank);
        printf("\nENTER THE LOGIN ID: ");
        scanf("%s", &login);
        printf("PAY THE BILL\n");
    pay3:
        if (c == 1)
        {
            printf("THE AMOUNT NEED TO PAID IS 4000 RS\n");
            printf("ENTER THE AMOUNT HERE:");
            scanf("%d", &x);
            if (x < 4000 || x > 4000)
            {
                printf("INVALID AMOUNT");
                goto pay3;
            }
            else if (x == 4000)
            {
                printf("PAYMENT SUCCESSFUL");
            }
        }
        else if (c == 2)
        {
            printf("THE AMOUNT NEED TO PAID IS 2000 RS\n");
            printf("ENTER THE AMOUNT HERE:");
            scanf("%d", &x);
            if (x < 2000 || x > 2000)
            {
                printf("INVALID AMOUNT");
                goto pay3;
            }
            else if (x == 4000)
            {
                printf("PAYMENT SUCCESSFUL");
            }
        }

        break;
    }
}

int main()
{
    int i, dose, n;
    int date;
    int month;
    int year;
    int list3, list4, list5;
    int j, p;
    char name[30];
    int age;
    char phn[20];
    char aadhar[20];
    int h;
    int current;
    int s[30];
    char ch;
    int from, dst;
    char nameofflight[25];
    char allot[20];
    char Class[20];
    char fcity[25];
    char dcity[25];

    printf("\n\t\t\t**********************************************************\n");
    printf("\t\t\t\tWELCOME TO TRIO AIRLINE TICKET BOOKING SYSTEM\n");
    printf("\t\t\t**********************************************************\n");

    printf("\nDO YOU HAVE ANY HEALTH ISSUES/CONDITIONS AS MENTIONED BELOW\n");
    printf("1)COVID-19\n2)HEART DISEASES\n3)APPENDIX PAIN\n4)RECENT SURGERIES\n5)NO ANY HEALTH ISSUES\n");
    printf("CHOOSE FROM 1-4 IF HAVING ANY PROBLEM,ELSE ENTER ANY OTHER KEY : ");
    scanf("%d", &h);

    switch (h)
    {

    case 1:
        printf("\nSorry for inconvenience, your booking cannot proceeed due to being COVID POSITIVE\n");
        exit(0);
        break;
    case 2:
        printf("\nSorry for inconvenience, your booking cannot proceed and you cannot board the plane due to HEART DISEASES\n");
        exit(0);
        break;

    case 3:
        printf("\nSorry for inconvenience, your booking cannot proceed and you cannot board the plane due to APPENDIX PAIN\n");
        exit(0);
        break;

    case 4:
        printf("\nSorry for inconvenience, your booking cannot proceed and you cannot board the plane due to having RECENT SURGERIES\n");
        exit(0);
        break;
    defualt:
        printf("\nPROCEED TO FURTHER PROCESSES\n");
        break;
    }

date:
    printf("\n*****************************");
    printf("\nENTER THE DATE/MONTH/YEAR\n");
    printf("*****************************");
    printf("\nENTER THE DATE OF THE TRIP: ");
    scanf("%d", &date);
    if (date < 1 || date > 31)
    {
        printf("Enter the date within 1 to 31 only");
        goto date;
    }
    printf("\nENTER THE MONTH OF THE TRIP: ");
    scanf("%d", &month);
    if (month < 1 || month > 12)
    {
        printf("Please enter month from 1 to 12 only");
        goto date;
    }

    printf("\nENTER THE YEAR OF THE TRIP:  ");
    scanf("%d", &year);
    if (year < 2022 || year > 2023)
    {
        printf("\nEnter the year as 2022 or above only");
        goto date;
    }

label:
    printf("\nENTER THE CURRENT LOCATION\n");
    printf("1)DELHI\n2)MUMBAI\n3)CHENNAI\n4)HYD\n5)GOA\n6)JAIPUR\n7)TIRUPATI\n8)VIJAYWADA\n9)BANGLORE\n");
    printf("YOUR CURRENT LOCATION is: ");
    scanf("%d", &from);

    if (from == 1)
        strcpy(fcity, "DELHI");
    else if (from == 2)
        strcpy(fcity, "MUMBAI");
    else if (from == 3)
        strcpy(fcity, "CHENNAI");
    else if (from == 4)
        strcpy(fcity, "HYD");
    else if (from == 5)
        strcpy(fcity, "GOA");
    else if (from == 6)
        strcpy(fcity, "JAIPUR");
    else if (from == 7)
        strcpy(fcity, "TIRUPATI");
    else if (from == 8)
        strcpy(fcity, "VIJAYWADA");
    else if (from == 9)
        strcpy(fcity, "BANGLORE");
    else if (from < 1 || from > 9)
    {
        printf("\nCHOOSE only above LOCATION\n");
        goto label;
    }
    printf("\n current city = %s", fcity);
    printf("\n\nENTER YOUR  DESTINATION LOCATION\n");
    printf("1)DELHI\n2)MUMBAI\n3)CHENNAI\n4)HYD\n5)GOA\n6)JAIPUR\n7)TIRUPATI\n8)VIJAYWADA\n9)BANGLORE\n");
    printf("YOUR DESTINATION LOCATION is : ");
    scanf("%d", &dst);
    if (dst == 1)
        strcpy(dcity, "DELHI");
    else if (dst == 2)
        strcpy(dcity, "MUMBAI");
    else if (dst == 3)
        strcpy(dcity, "CHENNAI");
    else if (dst == 4)
        strcpy(dcity, "HYD");
    else if (dst == 5)
        strcpy(dcity, "GOA");
    else if (dst == 6)
        strcpy(dcity, "JAIPUR");
    else if (dst == 7)
        strcpy(dcity, "TIRUPATI");
    else if (dst == 8)
        strcpy(dcity, "VIJAYWADA");
    else if (dst == 9)
        strcpy(dcity, "BANGLORE");
    else if (dst < 1 || dst > 9)
    {
        printf("\nCHOOSE only above LOCATION\n");
        goto label;
    }
    printf("\ndestination city=%s", dcity);

    if (from == dst)
    {
        printf("\nInavlid,Both the pickup and destination are same, please enter from the above options\n");
        goto label;
    }
    else if (from != dst)
    {
    flights:

        if (from < 5)
        {
            printf("\n**********************************");
            printf("\nLIST OF THE AVAILABLE FLIGHTS\n");
            printf("**********************************\n");
            printf("1)AIR INDIA, 8:00 am\n2)SPICE JET, 9:30 pm\n3)INDIGO, 7:00 am\n");
            printf("\nSELECT ONE OF THE FLIGHT: ");
            scanf("%d", &list3);
            if (list3 == 1)
                strcpy(nameofflight, " AIR INDIA, 8:00 am ");
            else if (list3 == 2)
                strcpy(nameofflight, " SPICE JET, 9:30 pm ");
            else if (list3 == 3)
                strcpy(nameofflight, " INDIGO, 7:00 am");
            else if (list3 < 1 || list3 > 3)
            {
                printf("\nENTER FROM AVAILABLE FLIGHTS\n");
                goto flights;
            }
        }

        if (from > 5)

        {
            printf("\n\nLIST OF THE AVAILABLE FLIGHTS\n");
            printf("1)GO AIR, 12:30 am\n2)AIR ASIA, 3:00 pm\n");
            printf("\nSELECT ONE OF THE FLIGHT: ");
            scanf("%d", &list4);
            if (list4 == 1)
                strcpy(nameofflight, " GO AIR, 12:30 am ");
            else if (list4 == 2)
                strcpy(nameofflight, " AIR ASIA, 3:00 pm ");
            else if (list4 < 1 || list4 > 2)
            {
                printf("\nENTER FROM AVAILABLE FLIGHTS\n");
                goto flights;
            }
        }
    }

Seat:
{
    printf("\n*********************************\n");
    printf("   SELECT ONE OF THE CLASS\n\n   [1] Business Class\n   [2] Economy class\n\n");
    printf("*********************************");
    printf("   \nChoosen: ");
    scanf("%d", &c);
    if (c == 1)
        strcpy(Class, "Business Class");
    else if (c == 2)
        strcpy(Class, "Economy class");
    switch (c)
    {
    case 1:

        printf("   Business class\n\n");
        printf("   Seats available\n    [1-15] \n\n");
        printf("   Pick a seat: ");
        scanf("%d", &p);
        if (p > 0 && p < 16)
        {
            printf("   Class: Business class\n");
            printf("   Seat no : %d\n", p);
            printf("   Your seat is partially booked.\n");
            printf("\nPlease complete your payment of RS 4000\n");
        }
        else
        {
            printf("\n In Business class 1 to 15 seats are alloted, please select between 1 to 15 seats.\n");
            goto Seat;
        }
        break;
    case 2:

        printf("   Economy class\n");
        printf("   Seats available [16-30]    \n\n");
        printf("Pick a seat: ");
        scanf("%d", &p);

        if (p > 15 && p < 31)
        {
            printf("   Class: Economy\n");
            printf("   Seat no : %d\n", p);
            printf("   Your seat is partially booked now.\n");
            printf("\nPlease complete your payment of RS 2000\n");
            break;
        }
        else
        {
            printf("\n In Economy class 15 to 30 seats are alloted, please select between 15 to 30 seats.\n");
            goto Seat;
        }
    default:
        printf(" Please select between [1] Business Class   [2] Economy class\n\n");
        goto Seat;
        break;
    }
}

    printf("**********************************");
    printf("\nCHOOSE THE PREFERENCE OF SEATING\n");
    printf("1)WINDOW SEAT\n2)AISLE SEAT\n");
    printf("SELECT ONE OF THE SEAT:");
    scanf("%d", &list5);
    if (list5 == 1)
    {
        strcpy(allot, "WINDOW SEAT");
    }
    else if (list5 == 2)
    {
        strcpy(allot, "AISLE SEAT");
    }

    printf("**********************************");
    printf("\nENTER THE DETAILS OF PASSENGER\n");
    printf("\nENTER THE NAME OF PASSENGER's:");
    scanf("%s", name);

    printf("\nENTER THE PASSENGER's AGE:");
    scanf("%d", &age);
phone:
    printf("\nENTER THE PASSENGER's PHONE NUMBER:");
    scanf(" %[^\n]", phn);
    if (strlen(phn) > 10 || strlen(phn) < 10)
    {
        printf("ENTER A VALID PHONE NUMBER\n");
        goto phone;
    }
adh:
    printf("\nENTER THE PASSENGER's AADHAR NUMBER:");
    scanf(" %[^\n]", aadhar);
    if (strlen(aadhar) > 14 || strlen(aadhar) < 14)
    {
        printf("ENTER A VALID AADHAR NUMBER\n");
        goto adh;
    }

    pmt();

    printf("\n\t\t *********************************************************\n");
    printf("\n\t\t\t\t\t\tReceipt");
    printf("\n\n\t\t NAME OF PASSENGER\t\t:\t %s ", name);
    printf("\n\t\t AGE OF THE PASSENGER\t\t:\t %d ", age);
    printf("\n\t\t PHONE NUMBER OF THE PASSENGER \t:\t %s ", phn);
    printf("\n\t\t AADHAR NUMBER OF THE PASSENGER :\t %s ", aadhar);
    printf("\n\t\t CURRENT LOCATION \t\t:\t %s", fcity);
    printf("\n\t\t DESTINATION \t\t\t:\t %s", dcity);
    printf("\n\t\t NAME OF THE FLIGHT \t\t:\t%s", nameofflight);
    printf("\n\t\t CLASS \t\t\t\t:\t %s", Class);
    printf("\n\t\t SEATING\t\t\t:\t %s ", allot);
    printf("\n\t\t SEAT NUMBER \t\t\t:\t %d ", p);
    printf("\n\t\t AMOUNT \t\t\t:\t %d ", x);

    printf("\n\t\t *********************************************************\n");

    printf("\n\t\t\tYour ticket is confirmed ");

    printf("\n\t\t *********************************************************\n");
    printf("\n\t\t\tThank you for booking");
    printf("\n\t\t *********************************************************\n");
}


