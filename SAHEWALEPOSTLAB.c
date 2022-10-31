#include<stdio.h>
void static bookingeconomyclasseats( int seatingchart[],int y);
void static bookingfirstclassseats(int seatingchart[],int y);
int static swappingseatseconomy(int seatingchart[],int y);
int static swappingseats(int seatingchart[],int y);

int main(){
    int cl;
    int seatsfirstclass;
    int seatseconomyclass;
    int seatingchart[100]={0};
    printf("Select Type of Class\n Press 1 for First Class\n Press 2 for Economy class\nAnd press 0 if you want to view the seating chart\n");
    scanf("%d",&cl);
    switch (cl){
    case 1:
    printf("Enter your seat number(1-30)\n");
    scanf("%d",&seatsfirstclass);
    bookingfirstclassseats(seatingchart,seatsfirstclass);

    break;

    case 2:
    printf("Enter your seat number(1-30)\n");
    scanf("%d",&seatsfirstclass);
    bookingeconomyclasseats(seatingchart,seatseconomyclass);
    break;

}
printf("\n BOARDING PASS\n Your class is %d\n Your seat number is %d",class,seatsfirstclass);
}
void static bookingfirstclassseats(int seatingchart[],int y){
    int flag;
    while (1)
    {
        if (*seatingchart==0)
        {
            printf("Congratulations, your seat has been bookes now\n");
            swappingseats(seatingchart,y);
            break;

        }
        if (*seatingchart==1)
        {
            printf("Sorry, but this seat is already booked/n");
        }  
    } 
}
void static bookingeconomyclasseats( int seatingchart[],int y){
    int flag;
    while (1)
    {
        if (*seatingchart==0)
        {
            printf("Congratulations, your seat has been bookes now\n");
            swappingseatseconomy(seatingchart,y);
            break;

        }
        if (*seatingchart==1)
        {
            printf("Sorry, but this seat is already booked/n");
        }  
    }  
}

int static swappingseatseconomy(int seatingchart[],int y){
       if (*seatingchart==0)
       {
        *seatingchart=1;
       }
       return *seatingchart;
       
}
int static swappingseats(int seatingchart[],int y){
    if (*seatingchart==0)
       {
        *seatingchart=1;
       }
       return *seatingchart;
}



