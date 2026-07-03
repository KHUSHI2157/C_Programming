
//u r riding a bicycle whose radius is 15inches.after how many tyre rotations u will cover distance of x metre? write a program to solve this problem
#include <stdio.h>
int main() {
    int age = 18;

    if (age > 18) {
       printf("Person is eligible to vote");
    } else {
        printf("Person is not eligible for vote");
    }

    return 0;
}
#include <stdio.h>
int main()
{
   int a;
    printf("enter the age of the person");
    scanf("%d",&a);
    if(a>=18)
    printf("person can be a legal voter");
    else
    printf("person can't be a legal votes");
    return 0;
}
//write a program to calculate time required to reach a destination which is x km far ,then you ask for mode of trnsport from user and then u ask the avg speed ,now the speed that the user will enter can not exeed this value that is given walk
//:10 kmph,cycle :30 kmph,bike:80 kmph,car : 120 kmph, udkke : 2000 kmph these r the limits 
#include <stdio.h>
int main(){
    float distance,speed,time;
    char mode;
    printf("Enter the distance to destination in kmph: ");
    scanf("%f",distance);
    printf("Enter mode of transport (walk / cycle / bike / car / udkke): ");
    scanf("%s", mode);
    printf("Enter the speed");
    scanf("%d",&speed);
    time = distance / speed;
    printf("Mode of Transport: %s\n", mode);
    printf("Distance: %.2f km\n", distance);
    printf("Speed: %.2f km/h\n", speed);

    return 0;
}
#include <stdio.h>
void area(float x);

int main(){
 float x;
  printf("Enter the radius of circle : ");
  /*scanf("%f",&r);
  float area = 3.14 * r * r;
  printf("area : %.2f",area);
  return 0 ;
  area( x);

}void area (float x){
  scanf("%f",&x);
  float a = 3.14* x*x;
  printf("area: %.2f",a);
}
#include <stdio.h>

int main() {
    float distance, speed, time;
    int choice;
    float maxSpeed;

    // Input distance
    printf("Enter distance to travel (in km): ");
    scanf("%f", &distance);

    // Transport menu
    printf(" Walk (max 10 kmph)\n");
    printf(" Cycle (max 30 kmph)\n");
    printf(" Bike (max 80 kmph)\n");
    printf(" Car (max 120 kmph)\n");
    printf(" UDKKE (max 2000 kmph)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Set speed limit
    switch(choice) {
        case 1: maxSpeed = 10; break;
        case 2: maxSpeed = 30; break;
        case 3: maxSpeed = 80; break;
        case 4: maxSpeed = 120; break;
        case 5: maxSpeed = 2000; break;
        default:
            printf("Invalid transport choice!\n");
            return 0;
    }

    // Input speed
    printf("Enter average speed (kmph): ");
    scanf("%f", &speed);

    // Speed validation
    if (speed <= 0 || speed > maxSpeed) {
        printf("Invalid speed! Maximum allowed speed is %.2f kmph\n", maxSpeed);
    } else {
        time = distance / speed;
        printf("Time required to reach destination: %.2f hours\n", time);
    }

    return 0;
}
#include <stdio.h>

int main() {
    float distance;
    float speed;
    float time;
    int transport;

    // Step 1: Input distance
    printf("Enter distance in km:30km ");
    scanf("%f", &distance);

    // Step 2: Choose transport
    printf("\nChoose transport:\n");
    printf("1. Walk (max 10 kmph)\n");
    printf("2. Cycle (max 30 kmph)\n");
    printf("3. Bike (max 80 kmph)\n");
    printf("4. Car (max 120 kmph)\n");
    printf("5. UDKKE (max 2000 kmph)\n");
    printf("Enter your choice: ");
    scanf("%d", &transport);

    // Step 3: Input speed
    printf("Enter speed in kmph: ");
    scanf("%f", &speed);

    // Step 4: Check speed and calculate time
    if (transport == 1 && speed <= 10) {
        time = distance / speed;
        printf("Time required: %.2f hours\n", time);
    }
    else if (transport == 2 && speed <= 30) {
        time = distance / speed;
        printf("Time required: %.2f hours\n", time);
    }
    else if (transport == 3 && speed <= 80) {
        time = distance / speed;
        printf("Time required: %.2f hours\n", time);
    }
    else if (transport == 4 && speed <= 120) {
        time = distance / speed;
        printf("Time required: %.2f hours\n", time);
    }
    else if (transport == 5 && speed <= 2000) {
        time = distance / speed;
        printf("Time required: %.2f hours\n", time);
    }
    else {
        printf("Invalid speed or transport choice!\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int d,m;
    float s,t;
    printf("enter the distance : ");
    scanf("%d",&d);
    printf("enter mode :\n1. walk\n2. cycle\n3. Bike\n4. Car\n");
    scanf("%d",&m);
    if(m<1 || m>4)
    {
        printf("wrong choice");
        return 0;
    }
    printf("enter speed : ");
    scanf("%f",&s);
    if(m==1)
    {
        if(s>10)
        {
            printf("speed not permissible:");
            return 0;
        }
        t=d/s;
    }
    else
    {
        if(m==2)
        {
            if(s>30)
            {
                printf("speed not permissible:");
                return 0;
            }
            t=d/s;
        }
        else
        {
            if(m==3)
            {
                if(s>80)
                {
                    printf("speed not permissible:");
                    return 0;
                }
                t=d/s;
            }
            else
            {
                    if(s>120)
                    {
                        printf("speed not permissible:");
                        return 0;
                    }
                    t=d/s;
            }
        }
    }
    int x;
    x=t;
    int sec = (t-x)*60;
    printf("Taken taken is %d hours and %d minutes",x,sec);
    return 0;
}



#include <stdio.h>

int main() {
  int i,n;
  printf("enter a no. ");
  scanf("%d",&n);
  for (i=1;i<=10;i++)
{
    printf("%d * %d =%d\n",n,i,n*i );
}
    return 0;
} 
//write a programe to check wheather a number is prime or not :
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a Prime number.\n", num);
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                printf("%d is not a Prime number.\n", num);
                break;
            }
        }

        if (i == num) {
            printf("%d is a Prime number.\n", num);
        }
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }

    if (n > 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
#include <stdio.h>

int main() {
    int num, rev = 0, temp, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for (; temp != 0; temp = temp / 10) {
        rev = rev * 10 + (temp % 10);
    }

    if (num == rev)
        printf("Palindrome number\n");
    else
        printf("Not a palindrome number\n");

    return 0;
}
#include <stdio.h>
int main()
{
    int n , rev,org,rem;
    printf("Enter a number ");
    scanf("%d",&n);
    for(;n>0;) 
    {  rem = n%10;
       rev = rev*10+rem;
        n/=10;
    }
   
    if(org==rev)
    printf("Palindrome");
    else
       printf("Not a Palindrom");
    
    return 0;
}
#include <stdio.h>

int main() {
    int num, original, remainder, result = 0, n = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // count digits
    for (; original != 0; original = original / 10)
        n++;

    original = num;

    for (; original != 0; original = original / 10) {
        remainder = original % 10;

        power = 1;
        for (i = 0; i < n; i++)
            power = power * remainder;

        result = result + power;
    }

    if (result == num)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}

#include <stdio.h>
int main() {
    int n,a=0,b=1,next,i;
    printf("Enter number: ");
    scanf("%d",&n);
    
    printf("Fibonacci series : ");
    for(i = 1; i <= n ;i++) {
       printf("%d",a);
       next = a+b;
       a = b;
       b = next;
    }
    return 0 ;

}
#include <stdio.h>

int main() {
    int num, a = 0, b = 1, next;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        printf("Number exists in Fibonacci series");
       
    }
    while(b<num)
    next = a+b;
       a = b;
       b = next;
    



    return 0;
}


#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>


void checkNumber(int num) {
    if (num % 2 == 0) {
        printf("number is Even");
    } else {
        printf("number is Odd");
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkNumber(n);  

    return 0;
}

// Checking whether a number is even or odd



