#include<stdio.h>
void static bookingfirstclassseats(int seatingchart[],int y);
void static swappingseats(int seatingchart[],int y);
void static swappingseatseconomy(int seatingchart[],int y);
void static bookingeconomyclasseats( int seatingchart[],int y);
int main(){
    int class;
    int seatsfirstclass;
    int seatseconomyclass;
    int seatingchart[100]={0};
    printf("Select Type of Class\n Press 1 for First Class\n Press 2 for Economy class\nAnd press 0 if you want to view the seating chart\n");
    scanf("%d",&class);
    switch (class)
    {
    case 1:
        
        printf("Select seat number (1-30)\n");
        scanf("%d",&seatsfirstclass);
        bookingfirstclassseats(seatingchart,seatsfirstclass);
        printf("\nBOARDING PASS\n Your class is %d\n You seat number is %d",class,seatsfirstclass);

        break;
    
    case 2:
    
        printf("Select seat number (31-100)\n");
        scanf("%d",&seatseconomyclass);
        bookingeconomyclasseats(seatingchart,seatseconomyclass);
        printf("\nBOARDING PASS\n Your class is %d\n You seat number is %d",class,seatseconomyclass);
        break;
    }    
}
void static bookingfirstclassseats(int seatingchart[],int y){
    if (*seatingchart==0)
    {
        printf("Congratulation, you have booked this seat now\n");
        swappingseats(seatingchart,y);
    }
    if (*seatingchart==1)
    {
        printf("Sorry, but this seat is already booked");
    }
    
}
void static bookingeconomyclasseats(int seatingchart[],int y){
    if (*seatingchart==0)
    {
        printf("Congratulation, you have booked this seat now\n");
        swappingseatseconomy(seatingchart,y);
    }
    if (*seatingchart==1)
    {
        printf("Sorry, but this seat is already booked");
    }
}
void static swappingseats(int seatingchart[],int y){
    if (*seatingchart==0)
    {
        *seatingchart=1;
    }
    printf("This seat has just been booked by you.\n");
    
}
void static swappingseatseconomy(int seatingchart[],int y){
    if (*seatingchart==0)
    {
        *seatingchart=1;
    }
    printf("This seat has just been booked by you.\n");
    
}
