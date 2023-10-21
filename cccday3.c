#include <stdio.h>
// #include<stdbool.h>        //returns either true or false value 
// void modify(a,b){
//     int c,d=2;
//     c=a*d+c;
//     return c;
// }
// int calculate(){
//     int a=5,b=20,c;
//     int d=10;
//     c=modify(a,b);
//     c=c+d;
//     printf("c=%d",c);
// }
// int main)(){
//     calculate();
// void main()   //---------->calling function
// {
//     m();    //---------->called function
//     m();
// }
// void m(){
//     static int x=5;                         //static is type of a storage class
//     x++;
//     printf("x=%d\n",x);   //x = 6  x=7

// }
//-----------------------------------------TYPES OF STORAGE CLASSES ---------------------------------------------------
//1.   AUTO
//auto int x;  //  -------> It is default storage class.assigned automatically to the variable by default
//2.   STATIC
//static int x;  //  -------> it retains the value of the variable for a lifetime even after execution.scope of static variable is local
//3.  REGISTER
//register int x;  //  -------> It is useful to store temprory values for fast processing.the scope of register variable is local
//4.  EXTERN  --------> it is used for variables used outside the main function.The scope of extern variable is global
/*
MR m lives in an apartment where there are many utility spaces
1.balcony                       local           STATIC storage class
2.roof                           global         
3.first aid room                global          REGISTER storage class
4.reception                     global          EXTERN storage class
5.ground                        local           STATIC storage class
6.record maintanence room       global          STATIC storage class     
identify the scope of utilities in accordance with storage classes in C
*/

// static int a=100;
// void main(){
//     static int a = 11;
//     ++a;
//     a=++a;
//     printf("%d",a);
// }
// static int x=5;
// void main(){
//     x=9;
//     {
//         int x=4;
//     }
//     printf("%d",x);
// }

// void main()
// {
//     static int x;
//     printf("x is %d",x);
// }

// int main(){
//     register int i=10;       //to storage classes cannot be used simultaneously
//     i=11;                 //auto   11
//     printf("%d\n",i);       //static 11
// }

// int counter(int i){
//     static int count=0;
//     count=count+i;
//     return count;

// }
// int main(){
//     int i,j;
//     for(i=0;i<=5;i++)
//         j=counter(i);
//         printf("%d\n",j);
//         return 0; 
// }
//when we write function it is parameter eg-constructing a house 
//when we pass values it is argument      eg-redesigning the house 

// extern int a =10;
// int main()
// {
//     fun();
//     fun();
//     return 0;
// }
// int fun()
// {
//     static int a=1;
//     printf("%d ",a);
//     a++;
//     return 0;
// }

// #define x 4+1         //replace 4+1 everywhere in the x
// int main()
// {
//     int i;
//     i=x*x*x;          //   4+1*4+1*4+1 = 4+4+4+1 = 13
//     printf("%d",i);
//     return 0;
// }

//--------------------------TCS questions ------------------------------------------------

// bool func(void)
// {
//     return -2;
// }
// int main()
// {
//     if(func()==-2)
//     {
//         printf("if");
//     }
//     else{
//         printf("else");
//     }
//     return 0;
// }


/*
SCENARIO 1

amit is the formen working in an automated machinery department he wants to write a function to calculate the depreciation 
value of the machinery based on the following inputs
a. original cost of machinery 5 lacs scrap value 50,000  lifetime of the machinery 10 yrs 

----------------X-------------------------------------X-----------------------------------X-------------------------------------
SCENARIO 2

from the following details generate a report showing the cash position at the end of a month from aman
a)Royalty received - rs 12,000
b) Machinery maintanence - RS 4000
c) Sales commission - Rs 3000
d) Interest on fixed deposit - Rs 3,000
e)Maintanence charges -Rs 4,000
f)Property tax - Rs 2000
g) Bonus - Rs 8,000
h)Gratunity - Rs 5,000
----------------X-------------------------------------X-----------------------------------X-------------------------------------

*/

// #include <stdio.h>

// int dep_or_surplus(){
//     int roy_re=12000;
//     int mac_main=4000;
//     int sales_commission=3000;
//     int interest=3000;
//     int main_charge=4000;
//     int property_tax =2000;
//     int bonus=8000;
//     int gratunity=5000;

//     int total_income=roy_re + sales_commission +interest +bonus + gratunity;
//     int expenditure= mac_main + main_charge + property_tax;
//     printf("total income is :%d\n",total_income);
//     printf("expenditure is :%d\n",expenditure);

//     if(total_income>expenditure)
//     printf("Aman is in surplus amount of :%d\n",total_income - expenditure);
//     else
//     printf("Aman is in deficit position of %d\n",expenditure-total_income);
// }
    
// int main()
// {
//     dep_or_surplus();
    
//     return 0;
// }

// int depreciation_value(){

//     float original_cost = 500000;
//     float scrap_value = 50000;
//     int lifetime = 10;
    
//     float depreciation_value = (original_cost - scrap_value) / lifetime;
    
//     printf("Depreciation value per year: %f", depreciation_value);
    
//     return 0;
// }
// int main(){
//     depreciation_value();
    
//     return 0;
// }
/*
Mr Hiranandani is working as a Corporate Executive.His Basic salary is Rs 20000.
Based on the following data calculate his net salary of 
(a) Dearness allownace @15% of the basic salary 
(b) HRA @ 20%
(C) yearly bonus of Rs 24000
(D) Provident fund 10% of gross 
(E) Employee state insurance 20% gross 
(F) income tax deductions @25% of gross 
(g) Net slab rate of more than 40,000 belongs to category x else y
*/
// float calculateDA(float basicSalary) {
//     return 0.15 * basicSalary;
// }

// float calculateHRA(float basicSalary) {
//     return 0.2 * basicSalary;
// }

// float calculateGrossSalary(float basicSalary, float DA, float HRA, float yearlyBonus) {
//     return basicSalary + DA + HRA + yearlyBonus;
// }

// float calculateProvidentFund(float grossSalary) {
//     return 0.1 * grossSalary;
// }

// float calculateESI(float grossSalary) {
//     return 0.2 * grossSalary;
// }

// float calculateIncomeTax(float grossSalary) {
//     if (grossSalary > 40000) {
//         return 0.25 * grossSalary;
//     }
//     return 0;
// }

// float calculateNetSalary(float grossSalary, float PF, float ESI, float incomeTax) {
//     return grossSalary - PF - ESI - incomeTax;
// }

// int main() {
//     float basicSalary = 20000;
//     float DA = calculateDA(basicSalary);
//     float HRA = calculateHRA(basicSalary);
//     float yearlyBonus = 24000;
//     float grossSalary = calculateGrossSalary(basicSalary, DA, HRA, yearlyBonus);
//     float PF = calculateProvidentFund(grossSalary);
//     float ESI = calculateESI(grossSalary);
//     float incomeTax = calculateIncomeTax(grossSalary);
//     float netSalary = calculateNetSalary(grossSalary, PF, ESI, incomeTax);
    
//     printf("Basic Salary: Rs %.2f\n", basicSalary);
//     printf("Dearness Allowance (DA): Rs %.2f\n", DA);
//     printf("House Rent Allowance (HRA): Rs %.2f\n", HRA);
//     printf("Yearly Bonus: Rs %.2f\n", yearlyBonus);
//     printf("Gross Salary: Rs %.2f\n", grossSalary);
//     printf("Provident Fund (PF): Rs %.2f\n", PF);
//     printf("Employee State Insurance (ESI): Rs %.2f\n", ESI);
//     printf("Income Tax: Rs %.2f\n", incomeTax);
//     printf("Net Salary: Rs %.2f\n", netSalary);
    
//     return 0;
// }

// int main()
// {
//     int a=10,b=25;
//     a=b+ ++a;
//     b=++b + ++a;
//     printf("%d %d \n",a,b);

//     return 0;
// }

int main()
// {
//     char arr[7]="Network";
//     printf("%s",arr);
//     return 0;
// // }
//  char arr[3]="Networks";
//     printf("%s",arr);
//     return 0;
//  int x = 7538;
//    printf("%d%d",x%100,x/10);


// int main()
// {
    
//   int x=24,y=39,z=45;
//   z=x+y;  //z=24+39=63
//   y=z-y;    //y=63-39 =24
//   x=z-y;    //x=63-24
//   printf("%d %d %d",x,y,z);
// };

// int main(){
    // int check = 2;
    // switch (check)
    // {
    //     case 1:
    //     printf("D.W.Steyn");
    //     case 2:
    //     printf("M.G.Johnson");
    //     case 3:
    //     printf("Mohammad Asif");
    //     default:
    //     printf("M.Murlidharan");

    //     return 0;
    // };
// }


// int main()
// {
//      int check = 2;
//     switch (check)
//     {
//         case 1:
//         printf("D.W.Steyn");
//         break;
//         case 2:
//         printf("M.G.Johnson");
//         break;
//         case 3:
//         printf("Mohammad Asif");
//         break;
//         default:
//         printf("M.Murlidharan");
//         break;

//         return 0;
//     }
//     return 0;
// }

//------------------------------FLOAT IS NOT USED ----------------------------------------------------
/*
AMIT IS 
MAXIMUM UNIT THAT CAN BE PRODUCED.
annual consumption is 20,000 units
cost of storage in the warehouse is rs10
*/
/*

*/
// #include <stdio.h>

// int main() {
//     int num;


//     printf("Enter a number: ");
//     scanf("%d", &num);

    
//     if (num < 0) {
//         printf("The number is negative.\n");
//     } else if (num == 0) {
//         printf("The number is neutral.\n");
//     } else {
//         printf("The number is non-negative.\n");
//     }

//     return 0;
// }
//-----------------------------------------------------------------------------------------------
// #include<stdio.h>
// #include<math.h>
// int optimum(int annual_con, int prod_cost, int stor_cost) {

//     int EOQ;  
//     EOQ = sqrt((2*annual_con*prod_cost)/stor_cost);
//     return EOQ;
// }
//  int main()
// {
//     int a,b,c;
//     int cost;
//     printf("\nEnter Annual Consumption :\t");
//     scanf("%d",&a);
//     printf("\nEnter ordering cost:\t");
//     scanf("%d",&b);
//     printf("\nEnter storage cost:\t");
//     scanf("%d",&c);
//     cost = optimum(a,b,c);
//     printf("EOQ = %d\n", cost);
//     printf("\n");
//     return 0;
// }
//------------------------------------------------------------------------------------------------

// #include <stdio.h>

// int main() {
//     int x,y,z;
//     x='1'-'0';  //ascii value of '1' =49 and '0'=48
//     y='a'-'b';  //ascii value of 'a' =97   and 'b'=98
//     z= x+y;
//     printf("%d",z);

//     return 0;
// }

------------------------------------------------------------------------------------------------
// #include <stdio.h>

// int main() {
//    const int x=5;
//    const int *ptrx;
//    ptrx=&x;
//    *ptrx=10;
//    printf("%d\n",x);
   

//     return 0;
// }

// #include <stdio.h>

// int main() {
//   char str[]={'a','b','c','\0'};
//   str[0]-=32;     //a ascii value 97 -32=65 (A)
//   printf("%s",str);
//   return 0;
   
// }
// ---------------------------------------------------------------------------------------------------

// scenario
/*


*/

