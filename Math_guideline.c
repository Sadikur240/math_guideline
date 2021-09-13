#include<stdio.h>
int main()
{   system("cls");
    system("color f3");
    int n;
    printf("\n\n\n\t\t\t\t\t\tWELCOME TO   ''MATH GUIDELINE FOR NEWBIE IN HIGHSCHOOL''    \n\n\n\t\tLet's learn some new important mathematics to begin your high-school journey.\n\t\tWhat do you want to begin with? (press one of those numeric key to start with. EXAMPLE::press 1 to start with LCM or GCD)");
    printf("\n\n\t\t(1)=LCM/GCD");
    printf("\n\n\t\t(2)=PERCENTAGE");
    printf("\n\n\t\t(3)=PRIME NUMBER");
    printf("\n\n\t\t(4)=FACTORIAL");
    printf("\n\n\t\t(5)=PERFECT NUMBER");
    printf("\n\n\t\t(6)=STRONG NUMBER");
    printf("\n\n\t\t(7)=GEOMETRY");
    printf("\n\n\t\t(8)=STATISTICS");
    printf("\n\n\t\t(9)=MATH QUIZ(FROM YOUR LEARNING)");
    printf("\n\n\t\tENTER:");
    scanf("%d",&n);
    if(n==1)
    {
        fun_lcmgcd();
    }
    if(n==2)
    {
        fun_percent();
    }
    if(n==3)
    {
        fun_prime();
    }
    if(n==4)
    {
        fun_factor();
    }
     if(n==5)
    {
        fun_perfect();
    }
    if(n==6)
    {
        fun_strong();
    }
    if(n==7)
    {
        fun_geo();
    }
    if(n==8)
    {
        fun_stat();
    }
    if(n==9)
    {
        fun_quiz();
    }

}
fun_lcmgcd()
{   system("cls");
    int n,n1,n2;
      printf("\n\n\t\t\t\t\t\t\t\tLCM AND GCD");
        printf("\n\n\t\t\t\t[1] What is LCM GCD?");
        printf("\n\n\t\t\t\t[2] Method of calculating LCM GCD");
        printf("\n\n\t\t\t\t[3] Calculating LCM GCD\n\n");
        printf("\n\n\t\t\t\tENTER:");
        scanf("%d",&n2);

        if(n2==1)
        {
            lcmgcd_a();
        }
        if(n2==2)
        {
           lcmgcd_b();
        }
        if(n2==3)
        {
            lcmgcd_c();
        }

   printf("\n\n\t\t\t\tIF YOU WANT TO GO TO LCM OR GCD'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_lcmgcd();
    }
    if(n==0)
    {
        main();
    }
}
int lcmgcd_a()
{   system("cls");
    int n;
      printf("\n\n\t\t\t\t\t\t\tLCM \n\tThe least common multiple is the smallest positive integer that is divisible by both given numbers.In arithmetic and number theory, the least common multiple, lowest common multiple, or smallest common multiple of two integers a and b, usually denoted by lcm(a, b), is the smallest positive integer that is divisible by both a and b. Since division of integers by zero is undefined, this definition has meaning only if a and b are both different from zero. However, some authors define lcm(a,0) as 0 for all a, which is the result of taking the lcm to be the least upper bound in the lattice of divisibility.The lcm of more than two integers is also well-defined: it is the smallest positive integer that is divisible by each of them.");
           printf("\n\n\t\t\t\t\t\t\tGCD \n\tThis is the greatest Common Divisor between 2 or more numbers.In mathematics, the greatest common divisor (GCD) of two or more integers, which are not all zero, is the largest positive integer that divides each of the integers. For two integers x, y, the greatest common divisor of x and y is denoted by gcd(x,y). For example, the GCD of 8 and 12 is 4, that is, gcd(8,12)=4.In the name 'greatest common divisor', the adjective 'greatest' may be replaced by 'highest', and the word 'divisor' may be replaced by 'factor', so that other names include greatest common factor (gcf), etc. Historically, other names for the same concept have included greatest common measure.This notion can be extended to polynomials and other commutative rings.");
printf("\n\n\t\t\t\tIF YOU WANT TO GO TO LCM OR GCD'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_lcmgcd();
    }
    if(n==0)
    {
        main();
    }
}
int lcmgcd_b()
{   system("cls");
    int n;
                printf("\n\n\t\t\t\t\t To find the LCM of numbers \n\n\n\n\t\t\t\tStep1: Find the prime factorization of each number and write it in index form.\n\t\t\t\tStep2: The Least Common Multiple is the product of the each prime factors with the greatest power.\n");
            printf("\n\n\t\t\t\t\t To find the GCD of numbers \n\n\n\n\t\t\t\tStep1: List all the prime factors for each number.\n\t\t\t\tStep2: Find the factors which are common in both the numbers.\n\t\t\t\tStep3: Multiply all the common factors from step # 2 to get Greatest Common Divisor or GCD.\n");
printf("\n\n\t\t\t\tIF YOU WANT TO GO TO LCM OR GCD'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_lcmgcd();
    }
    if(n==0)
    {
        main();
    }
}
int lcmgcd_c()
{   system("cls");
    int n;
    int num1, num2, gcd, lcm, remainder, numerator, denominator;
           printf("\n\n\t\t\t\t\t\t\t\tCALCULATING PERCENTAGE");
            printf("\n\n\n\t\t\t\tEnter two numbers:");
            scanf("%d %d", &num1, &num2);
                if (num1 > num2)
                {
                    numerator = num1;
                    denominator = num2;
                }
                else
                {
                    numerator = num2;
                    denominator = num1;
                }
                    remainder = numerator % denominator;
                    while (remainder != 0)
                    {
                        numerator   = denominator;
                        denominator = remainder;
                        remainder   = numerator % denominator;
                    }
                    gcd = denominator;
                    lcm = num1 * num2 / gcd;
            printf("\n\n\n\t\t\t\tGCD of %d and %d = %d\n", num1, num2, gcd);
            printf("\n\n\n\t\t\t\tLCM of %d and %d = %d\n", num1, num2, lcm);
printf("\n\n\t\t\t\tIF YOU WANT TO GO TO LCM OR GCD'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_lcmgcd();
    }
    if(n==0)
    {
        main();
    }
}
fun_percent()
{   system("cls");
    int n,n1,n2,n3;
        printf("\n\n\t\t\t\t\t\t\t\t PERCENTAGE?");
        printf("\n\n\n\t\t\t\t[1] What is percentage?");
        printf("\n\n\t\t\t\t[2] Method of calculating percentage");
        printf("\n\n\t\t\t\t[3] Calculating percentage");
        printf("\n\n\t\t\t\tENTER:");
        scanf("%d",&n2);
        if(n2==1)
        {
            fun_per_a();
        }
        if(n2==2)
        {   fun_per_b();
             }
        if(n2==3)
        { fun_per_c();
        }


   printf("\n\n\t\t\t\tIF YOU WANT TO GO TO PERCENTAGE'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_percent();
    }
    if(n==0)
    {
        main();
    }
}
int fun_per_a()
{   system("cls");
int n;
    printf("\n\n\n\t\t\t\t\t\t\t\t\t PERCENTAGE \n\n\tIn mathematics, a percentage is a number or ratio expressed as a fraction of 100. A percentage is a dimensionless number ; it has no unit of measurement.\n\n\n");
 printf("\n\n\t\t\t\tIF YOU WANT TO GO TO PERCENTAGE'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_percent();
    }
    if(n==0)
    {
        main();
    }
}
int fun_per_b()
{  system("cls");
int n;
printf("\n\n\t\t\t\t\t\tMethod of calculating PERCENTAGE");
 printf("\n\n\t\t To find the PERCENTAGE of numbers,The percent value is computed by multiplying the numeric value of the ratio by 100. For example, to find 50 apples as a percentage of 1250 apples, one first computes the ratio  50/1250 = 0.04, and then multiplies by 100 to obtain 4%. The percent value can also be found by multiplying first instead of later, so in this example, the 50 would be multiplied by 100 to give 5,000, and this result would be divided by 1250 to give 4%. To calculate a percentage of a percentage, convert both percentages to fractions of 100, or to decimals, and multiply them.");
 printf("\n\n\t\t\t\tIF YOU WANT TO GO TO PERCENTAGE'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_percent();
    }
    if(n==0)
    {
        main();
    }

}
int fun_per_c()
{
    system("cls");
    int n3,n;
    printf("\n\n\t\t\t\t\t\t Calculating PERCENTAGE");
    printf("\n\n\t\tIf you want to calculate percentage PRESS '0' Else if you want to calculate Amount by Percentage of Total amount PRESS '1'");
          printf("\n\n\t\t\t\tENTER:");
          scanf("%d",&n3);
            if (n3==0)
        {
            float percentage;
            int total;
            int obtain;
            printf("\n\n\t\t\t\tEnter Total Amount:");
            scanf("%d",&total);
            printf("\n\n\t\t\t\tEnter the value Which's percentage you want to calculate:");
            scanf("%d",&obtain);
            percentage = (float)obtain / total * 100.0;

            printf("\n\n\t\t\t\tPercentage = %.2f%%", percentage);
        }
        else if (n3==1)
        {
            int percentage;
   int total;
   int obtain;
   printf("\n\n\n\t\t\t\tEnter Total Amount:");
   scanf("%d",&total);
   printf("\n\n\n\t\t\t\tEnter the percentage of total amount:");
   scanf("%d",&percentage);
   obtain=(percentage / 100.00)* total;

   printf("\n\n\t\t\t\tThe %d%% of %d is = %d",percentage,total,obtain);
        }
         printf("\n\n\t\t\t\tIF YOU WANT TO GO TO PERCENTAGE'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_percent();
    }
    if(n==0)
    {
        main();
    }
}

fun_prime()
{   system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\tPRIME NUMBER");
    printf("\n\n\t\t\t\t(1)What is a prime number?");
    printf("\n\n\t\t\t\t(2)Primality test");
    printf("\n\n\t\t\t\t(3)Prime numbers of an interval");
    printf("\n\n\t\t\t\tEnter:");
    scanf("%d",&n);
    if(n==1)
    {
        fun_pr_a();
    }
    if(n==2)
    {
        fun_pr_b();
    }
    if(n==3)
    {
        fun_pr_c();
    }
}
fun_pr_a()
{     system("cls");
int n;
     printf("\n\n\t\t\t\t\t\t\tWhat is a prime number?");
     printf("\n\nA natural number (1, 2, 3, 4, 5, 6, etc.) is called a prime number (or a prime) if it is greater than 1 and cannot be written as the product of two smaller natural \nnumbers.This idea leads to a different but equivalent definition of the primes: they are the numbers with exactly two positive divisors, 1 and the number itself.Yet \nanother way to express the same thing is that a number n is prime if it is greater than one and if none of the numbers { 2,3....,n-1}{2,3,...,n-1} divides n evenly.. For example, 5 is prime because the only ways of writing it as a product, 1 . 5 or 5 . 1, involve 5 itself");
     printf("\n\n\t\t\t\tIF YOU WANT TO GO TO PRIME NUMBER'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_prime();
    }
    if(n==0)
    {
        main();
    }
}
fun_pr_b()
{    system("cls");
    printf("\n\n\t\t\t\t\t\t\tPrimality test");
    printf("\n\n\t\t\t\t#YOU SHOULD TRY YOURSELF FIRST,THEN COMPARE TO OURS");
    int i,n,m=0;
    printf("\n\n\t\t\t\tEnter a number to test any it's primality:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            m++;
        }

    }
    if(m==2)
       {

        printf("\n\n\t\t\t\t%d is a prime number.\n",n);

       }
    else
    {
        printf("\n\n\t\t\t\t%d is not a prime number.\n",n);

    }
printf("\n\n\t\t\t\tIF YOU WANT TO GO TO PRIME NUMBER'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_prime();
    }
    if(n==0)
    {
        main();
    }
}
fun_pr_c()
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t\tPrime numbers of an interval");
    int i,a,x=0,b,y,count=0,n;
    printf("\n\n\t\t\t\tEnter initial number:");
    scanf("%d",&a);
    printf("\n\n\t\t\t\tEnter last number:");
    scanf("%d",&b);
    printf("\t\t\t\t");
    for(i=a;i<=b;i++)
    {
              y=0;
            for(x=2;x<i;x++)
               {
                 if(i%x==0)
                 {
                   y=1;
                 }
               }

         if(y==0)
         {    if(i==1)
                   {
                       continue;
                   }
             printf("%d ",i);
             count=count+1;
        }
    }
    printf("\n\n\t\t\t\tHERE %d NUMBERS ARE PRESENT IN THE INTERVAL",count);
    printf("\n\n\t\t\t\tIF YOU WANT TO GO TO PRIME NUMBER'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_prime();
    }
    if(n==0)
    {
        main();
    }
}
fun_factor()
{
    system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\tFACTORIAL");
    printf("\n\n\t\t\t\t(1)What is factorial?");
    printf("\n\n\t\t\t\t(2)Factorial of a number");
    printf("\n\n\t\t\t\t(3)Summation of factorials of an interval");
    printf("\n\n\t\t\t\tEnter:");
    scanf("%d",&n);
    if(n==1)
    {
        fun_factor_a();
    }
    if(n==2)
    {
        fun_factor_b();
    }
    if(n==3)
    {
        fun_factor_c();
    }
}
fun_factor_a()
{
   system("cls");
int n;
     printf("\n\n\t\t\t\t\t\t\tWhat is factorial?");
     printf("\n\nIn mathematics, the factorial of a non-negative integer n, denoted by n!, is the product of all positive integers less than or equal to n: For example, The value of 0! is 1, according to the convention for an empty product.Factorials are very simple things. They're just products, indicated by an exclamation mark. For instance, four \nfactorial is written as 4! and means 1.2.3.4 = 24 . In general, n! 'enn factorial' means the product of all the whole numbers from 1 to n; that is, n!");
     printf("\n\n\t\t\t\tIF YOU WANT TO GO TO FACTORIAL'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_factor();
    }
    if(n==0)
    {
        main();
    }
}
fun_factor_b()
{  system("cls");
    int n,f=1,i;
    printf("\n\n\t\t\t\t\t\t\tFactorial of a number");
    printf("\n\n\t\t\t\t#YOU SHOULD TRY YOURSELF FIRST,THEN COMPARE TO OURS");
    printf("\n\n\t\t\t\tEnter the number:");
    scanf("%d",&n);
    for(i=1;n>0;i++)
    {
      f=f*n;
      n=n-1;
    }
    printf("\n\n\t\t\t\tThe required answer is %d",f);
    printf("\n\n\t\t\t\tIF YOU WANT TO GO TO FACTORIAL'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_factor();
    }
    if(n==0)
    {
        main();
    }
}
fun_factor_c()
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t\tSummation of factorials of an interval");
    int n,f=1,i,e,sum=0;
    printf("\n\n\t\t\t\tEnter the initial number:");
    scanf("%d",&i);
    printf("\n\n\t\t\t\tEnter the ending number:");
    scanf("%d",&e);
    for(i=i;i<=e;i++)
    {   n=i;
       f=1;
    for(n=n;n>0;n--)
    {
      f=f*n;
    }
    sum=sum+f;
    }
    printf("\n\n\t\t\t\tThe required result is %d",sum);
    printf("\n\n\t\t\t\tIF YOU WANT TO GO TO FACTORIAL'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_factor();
    }
    if(n==0)
    {
        main();
    }
}
fun_perfect()
{
    system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\tPERFECT NUMBER");
    printf("\n\n\t\t\t\t(1)What is perfect number?");
    printf("\n\n\t\t\t\t(2)Calculating a number is perfect or not");
    printf("\n\n\t\t\t\t(3)Perfect number between an interval");
    printf("\n\n\t\t\t\tEnter:");
    scanf("%d",&n);
    if(n==1)
    {
        fun_perfect_a();
    }
    if(n==2)
    {
        fun_perfect_b();
    }
    if(n==3)
    {
        fun_perfect_c();
    }


}
fun_perfect_a()
{
   system("cls");
int n;
     printf("\n\n\t\t\t\t\t\t\tWhat is perfect number?");
     printf("\n\nIn number theory, a perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. For instance, 6 has divisors 1, 2 and 3, and 1 + 2 + 3 = 6, so 6 is a perfect number.");
     printf("\n\n\t\t\t\tIF YOU WANT TO GO TO PERFECT NUMBER'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_perfect();
    }
    if(n==0)
    {
        main();
    }
}
fun_perfect_b()
{  system("cls");
    int a,i,x,count=0,y=0,n;
    printf("\n\n\t\t\t\t\t\t\tCalculating a number is perfect or not");
    printf("\n\n\t\t\t\t#YOU SHOULD TRY YOURSELF FIRST,THEN COMPARE TO OURS");

    printf("\n\n\t\t\t\tEnter the number:");
    scanf("%d",&i);

        for(x=1;x<i;x++)
        {
            if(i%x==0)
            {
               y=y+x;

            }
        }
        if(y==i)
            {
                printf("\n\n\t\t\t\t%d is a  perfect number",y);
            }
        else printf("\n\n\t\t\t\t%d is not a perfect number",i);
    printf("\n\n\t\t\t\tIF YOU WANT TO GO TO PERFECT NUMBER'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_perfect();
    }
    if(n==0)
    {
        main();
    }
}
fun_perfect_c()
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t\tPerfect number between an interval");

    int a,i,x,count=0,y=0,n;
    printf("\n\n\t\t\t\tEnter the initial number:");
    scanf("%d",&i);
    printf("\n\n\t\t\t\tEnter the last number:");
    scanf("%d",&a);
    printf("\n\t\t\t\t");
    for(i=i;i<=a;i++)
    {
        for(x=1;x<i;x++)
        {
            if(i%x==0)
            {
               y=y+x;

            }
        }
        if(y==i)
        {
            printf("%d ",i);
             count=count+1;
        }
        y=0;
    }
    printf("\n\n\t\t\t\tHere are %d perfect number between the interval",count);
    printf("\n\n\t\t\t\tIF YOU WANT TO GO TO PERFECT NUMBER'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_perfect();
    }
    if(n==0)
    {
        main();
    }
}
fun_strong()
{
    system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\tSTRONG NUMBER");
    printf("\n\n\t\t\t\t(1)What is strong number?");
    printf("\n\n\t\t\t\t(2)Calculating a number is strong or not");
    printf("\n\n\t\t\t\t(3)Strong number between an interval");
    printf("\n\n\t\t\t\tEnter:");
    scanf("%d",&n);
    if(n==1)
    {
        fun_strong_a();
    }
    if(n==2)
    {
        fun_strong_b();
    }
    if(n==3)
    {
        fun_strong_c();
    }


}
fun_strong_a()
{
   system("cls");
int n;
     printf("\n\n\t\t\t\t\t\t\tWhat is strong number?");
     printf("\n\nIn number theory,A number can be said as a strong number when the sum of the factorial of the individual digits is equal to the number.For example, 145 is a strong number.Since, 1! + 4! + 5!=145. That's how it works.");
     printf("\n\n\t\t\t\tIF YOU WANT TO GO TO STRONG NUMBER'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_strong();
    }
    if(n==0)
    {
        main();
    }
}
fun_strong_b()
{      system("cls");
         int  a,rem,fac=1,x=0,n;
    printf("\n\n\t\t\t\t\t\t\tCalculating a number is strong or not");
    printf("\n\n\t\t\t\t#YOU SHOULD TRY YOURSELF FIRST,THEN COMPARE TO OURS");

  printf("\n\n\t\t\t\t\tEnter a number:");
  scanf("%d",&a);
  n=a;
  for(;n!=0;n=n/10)
  {
      rem=n%10;
        for(;rem>0;rem--)
        {
            fac=fac*rem;
        }
        x=x+fac;
        fac=1;

  }
  if(x==a)
  {
      printf("\n\n\t\t\t\t%d is a strong number.",x);
  }
  else printf("\n\n\t\t\t\t%d is not a strong number",a);
    printf("\n\n\t\t\t\tIF YOU WANT TO GO TO STRONG NUMBER'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_strong();
    }
    if(n==0)
    {
        main();
    }
}
fun_strong_c()
{
    system("cls");
    printf("\n\n\t\t\t\t\t\t\tPerfect number between an interval");

    int  i,a,rem,fac=1,n,x,p,q,count=0;
  printf("\n\n\t\t\t\tEnter initial number:");
  scanf("%d",&p);
  printf("\n\n\t\t\t\tEnter last number:");
  scanf("%d",&q);
  n=a;
  printf("\n\n\t\t\t\t");
  for(p=p;p<=q;p++)
  {
  x=0;
  a=p;
  for(;a!=0;a=a/10)
  {
      rem=a%10;
        for(;rem>0;rem--)
        {
            fac=fac*rem;
        }
        x=x+fac;
        fac=1;

  }
  if(x==p)
  {
      printf("%d ",x);
      count++;
  }
  }
  printf("\n\n\t\t\t\tHere are %d strong numbers in the interval",count);
    printf("\n\n\t\t\t\tIF YOU WANT TO GO TO STRONG NUMBER'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_strong();
    }
    if(n==0)
    {
        main();
    }
}
fun_geo()
{
    system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\t\t\tGEOMETRY");
     printf("\n\n\n\t\t\t\t\t\t(1)Triangle.");
      printf("\n\n\t\t\t\t\t\t(2)Quadrilateral.");
       printf("\n\n\t\t\t\t\t\t(3)Circle.");
       printf("\n\n\t\t\t\t\t\tEnter:");
       scanf("%d",&n);
       if(n==1)
       {
          fun_geo_a();
       }
       if(n==2)
       {
          fun_geo_b();
       }
       if(n==3)
       {
           fun_geo_c();
       }
}
fun_geo_a()
{
    system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\tWhat is traiangle?");
    printf("\nA triangle is a polygon with three edges and three vertices. It is one of the basic shapes in geometry. A triangle with vertices A, B, and C is denoted triangle ABC.");
    printf("\n\n\n\t\t\t\t\t\tWhat are the types of triangle?");
    printf("\nTriangle types are defined by angle and length properties.There are three  types of triangle. They are: Equilateral,Isosceles and Right-angled triangle.The sum \nof angles in any triangle is 180 deg.");
    printf("\n\n\n\t\t\t\t\t\tDefinition of triangle's type:");
    printf("\nEquilateral:\nAn equilateral triangle has three equal sides and angles. It will always have angles of 60 deg in each corner.");
    printf("\n\nIsosceles:\nAn isosceles triangle can be drawn in many different ways. It can be drawn to have two equal sides and two equal angles or with two acute angles and one\nobtuse angle.");
    printf("\n\nRight-angled triangle:\nA right-angled triangle has one 90 deg angle");
    printf("\n\n\nN.B: It is possible for a triangle to be a right-angled triangle and an isosceles triangle at the same time. In this case the angles would be 90 deg, 45 deg and 45 deg.");
    printf("\n");
    printf("\n\n\t\t\t\tIF YOU WANT TO GO TO GEOMETRY'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
          fun_geo();
    }
    if(n==0)
    {
        main();
    }
}
fun_geo_b()
{
  system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\tWhat is quadrilateral?\n");
    printf("\nA quadrilateral is a polygon in Euclidean plane geometry with four edges and four vertices. Other names for quadrilateral include quadrangle and tetragon.\nA quadrilateral, in general, has sides of different lengths and angles of different measures.");
    printf("\n\n\n\t\t\t\t\t\tWhat are the types of quadrilateral?");
  printf("\n\nThere are five basic types of quadrilaterals. They are: Trapezium, Parallelogram, Rectangle, Rhombus, Square.");
  printf("\n\n\t\t\t\t\t\tTypes of quadrilateral:");

   printf("\n\nTrapezium:\nA trapezium is a 2d shape and a type of quadrilateral, which has only two parallel sides and the other two sides are non-parallel.");
   printf("\n\nParallelogram:\nA parallelogram is a quadrilateral that has its opposite sides parallel and equal to each other. It has its interior opposite angles equal also the angles on the same\nside of transversal sum up to 180 degrees or supplementary to each other.");
   printf("\n\nRectangle:\nA Rectangle is a four sided-polygon, having all the internal angles equal to 90 degrees. The two sides at each corner or vertex, meet at right angles.");
   printf("\n\nRhombus:\nA quadrilateral that has a flat shape with four equally straight sides its called rhombus.");
   printf("\n\nSquare:\nA square is a regular quadrilateral, which means that it has four equal sides and four equal angles. It can also be defined as a rectangle in which two adjacent sides\nhave equal length.");
   printf("\n");
  printf("\n\n\t\t\t\tIF YOU WANT TO GO TO GEOMETRY'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_geo();
    }
    if(n==0)
    {
          main();
    }




}
fun_geo_c()
{
     system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\twhat is circle?");
    printf("\n\nCircle is a shape consisting of all points in a plane that are at a given distance from a given point, the centre.");
    printf("\n\n\n\t\t\t\t\t\tImportant Circle Parts:");
    printf("\nRadius:\nThe distance between any point of the circle and the centre is called the radius:");
    printf("\n\nChord:\nA line segment whose endpoints are on a circle.");
    printf("\n\nDiameter:\nA chord that passes through the center of the circle. The length of a diameter is two times the length of a radius.");
    printf("\n\nSecant:\nA line that intersects a circle in two points.");
    printf("\n\nTangent:\nA line that intersects a circle in exactly one point.");
    printf("\n\nPoint of Tangency:\nThe point where a tangent line touches the circle.");
    printf("\n\nTangent Circles:\nTwo or more circles that intersect at one point.");
    printf("\n\nConcentric Circles:\nTwo or more circles that have the same center, but different radius.");
    printf("\n\nCongruent Circles:\nTwo or more circles with the same radius, but different centers.");
    printf("\n");
    printf("\n\n\t\t\t\tIF YOU WANT TO GO TO GEOMETRY'S MENU PRESS '1' OR IF YOU WANT TO GO TO MAIN MENU PRESS '0'  OTHERWISE PRESS ANYTHING ELSE");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_geo();
    }
    if(n==0)
    {
        main();
    }

}
fun_stat()
{   system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\tSTATISTICS");
    printf("\n\n\t\t\t\t(1)Mean");
    printf("\n\n\t\t\t\t(2)Median");
    printf("\n\n\t\t\t\t(3)Mode");
    printf("\n\n\t\t\t\t(4)Standard Deviation");
    printf("\n\n\t\t\t\tEnter:");
    scanf("%d",&n);
    if(n==1)
    {
        fun_mean();
    }
    if(n==2)
    {
        fun_med();
    }
    if(n==3)
    {
        fun_mode();
    }
    if(n==4)
    {
        fun_std();
    }

}
int fun_mean()
{
    system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\tMEAN");
    printf("\n\n\t\t\t\t(1)What is mean in statistics");
    printf("\n\n\t\t\t\t(2)Calculating mean");
    printf("\n\n\t\t\t\tEnter:");
    scanf("%d",&n);
    if(n==1)
    {
        fun_mean_a();
    }
    if(n==2)
    {
        fun_mean_b();
    }

}
int fun_mean_a()
{
    system("cls");
     int n;
     printf("\n\n\t\t\t\t\t\t\tWhat is mean in statistics?");
     printf("\n\nMean is an essential concept in mathematics and statistics. The mean is the average or the most common value in a collection of numbers.In statistics, it is a measure of central tendency of a probability distribution along median and mode. It is also referred to as an expected value.Arithmetic mean is the total of the sum of all values in a collection of numbers divided by the number of numbers in a collection.");
     printf("\n\n\t\tIF YOU WANT TO GO TO MEAN'S MENU PRESS '1' OR ELSE IF YOU WANT TO GO TO STATISTIC'S MENU PRESS '2'AND IF YOU WANT TO GO TO MAIN MENU PRESS'0' ");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_mean();
    }
    if(n==2)
    {
        fun_stat();
    }
    if(n==0)
    {
        main();
    }
}
int fun_mean_b()
{
    system("cls");
    int i,n;
    float avg,sum=0;
    printf("\n\n\t\t\t\t\t\t\tCalculating mean");
    printf("\n\n\t\t\t\t#YOU SHOULD TRY YOURSELF FIRST,THEN COMPARE TO OURS");
    printf("\n\n\t\t\t\tHow many numbers do you want to input:");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        printf("\n\n\t\t\t\tThe number %d position's number: ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("\n\n\t\t\t\tThe mean is %.2f\n",avg);
    printf("\n\n\t\tIF YOU WANT TO GO TO MEAN'S MENU PRESS '1' OR ELSE IF YOU WANT TO GO TO STATISTIC'S MENU PRESS '2'AND IF YOU WANT TO GO TO MAIN MENU PRESS'0' ");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_mean();
    }
    if(n==2)
    {
        fun_stat();
    }
    if(n==0)
    {
        main();
    }
}
int fun_med()
{
    system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\tMEDIAN");
    printf("\n\n\t\t\t\t(1)What is median in statistics");
    printf("\n\n\t\t\t\t(2)Calculating median");
    printf("\n\n\t\t\t\tEnter:");
    scanf("%d",&n);
    if(n==1)
    {
        fun_med_a();
    }
    if(n==2)
    {
        fun_med_b();
    }

}
int fun_med_a()
{
    system("cls");
     int n;
     printf("\n\n\t\t\t\t\t\t\tWhat is median in statistics?");
     printf("\n\nThe median is the middle number in a sorted, ascending or descending, list of numbers and can be more descriptive of that data set than the average. The median is sometimes used as opposed to the mean when there are outliers in the sequence that might skew the average of the values.If you have an odd number, divide by 2 and round up to get the position of the median number. If you have an even number, divide by 2. Go to the number in that position and average it with the number in the next higher position to get the median.");
     printf("\n\n\t\tIF YOU WANT TO GO TO MEDIAN'S MENU PRESS '1' OR ELSE IF YOU WANT TO GO TO STATISTIC'S MENU PRESS '2'AND IF YOU WANT TO GO TO MAIN MENU PRESS'0' ");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_med();
    }
    if(n==2)
    {
        fun_stat();
    }
    if(n==0)
    {
        main();
    }
}
int fun_med_b()
{
    system("cls");
    int i,n,x,y;
    float sum=0,med;
    printf("\n\n\t\t\t\t\t\t\tCalculating median");
    printf("\n\n\t\t\t\t#YOU SHOULD TRY YOURSELF FIRST,THEN COMPARE TO OURS");
    printf("\n\n\t\t\t\tHow many numbers do you want to input:");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        printf("\n\n\t\t\t\tThe number %d position's number: ",i);
        scanf("%d",&a[i]);
    }

    if(n%2!=0)
    {
        x=(n+1)/2;
        printf("\n\n\t\t\t\tMedian= %d\n",a[x]);
    }
    if(n%2==0)
    {
        x=n/2;
        y=x+1;
        med=(a[x]+a[y])/2.0;
        printf("\n\n\t\t\t\tMedian= %.2f\n",med);
    }
    printf("\n\n\t\tIF YOU WANT TO GO TO MEDIAN'S MENU PRESS '1' OR ELSE IF YOU WANT TO GO TO STATISTIC'S MENU PRESS '2'AND IF YOU WANT TO GO TO MAIN MENU PRESS'0' ");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_med();
    }
    if(n==2)
    {
        fun_stat();
    }
    if(n==0)
    {
        main();
    }
}
int fun_mode()
{
    system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\tMODE");
    printf("\n\n\t\t\t\t(1)What is mode in statistics");
    printf("\n\n\t\t\t\t(2)Calculating mode");
    printf("\n\n\t\t\t\tEnter:");
    scanf("%d",&n);
    if(n==1)
    {
        fun_mode_a();
    }
    if(n==2)
    {
        fun_mode_b();
    }

}
fun_mode_a()
{
    system("cls");
     int n;
     printf("\n\n\t\t\t\t\t\t\tWhat is mode in statistics?");
     printf("\n\nThe mode is the value that appears most often in a set of data values. If X is a discrete random variable, the mode is the value x at which the probability mass function takes its maximum value. In other words, it is the value that is most likely to be sampled.The mode of a data set is the number that occurs most frequently in the set. To easily find the mode, put the numbers in order from least to greatest and count how many times each number occurs. The number that occurs the most is the mode!");
     printf("\n\n\t\tIF YOU WANT TO GO TO MODE'S MENU PRESS '1' OR ELSE IF YOU WANT TO GO TO STATISTIC'S MENU PRESS '2'AND IF YOU WANT TO GO TO MAIN MENU PRESS'0' ");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_mode();
    }
    if(n==2)
    {
        fun_stat();
    }
    if(n==0)
    {
        main();
    }
}
fun_mode_b()
{
    system("cls");
    int n,i,count,d=1;
    printf("\n\n\t\t\t\t\t\t\tCalculating mode");
    printf("\n\n\t\t\t\t#YOU SHOULD TRY YOURSELF FIRST,THEN COMPARE TO OURS");

    printf("\n\n\t\t\t\tEnter how many numbers do you want to input: ");
    scanf("%d",&n);
    int a[n],f[n];
    printf("\n\n\t\t\t\tEnter elements:");
    for(i=0; i<n; i++)
    {   printf("\n\n\t\t\t\tThe number %d position's number:",i+1);
        scanf("%d",&a[i]);
        f[i]=1;
    }
    for(i=0; i<n; i++)
    {
        count=1;
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                f[j]=0;
            }
            if(f[i]!=0)
                f[i]=count;
        }
    }
    int max=f[0];
    for(i=1;i<n;i++)
    {

        if(max<f[i])
        {
            max=f[i];
        }
    }
int j;
    i=0;
    while(i<n)
    {
        i++;
        if(f[i]==max)
        {
             j=i;
        }
    }
     printf("\n\n\t\t\t\t%d is the mode and it is %d times present in the list",a[j],max);
     printf("\n\n\t\tIF YOU WANT TO GO TO MODE'S MENU PRESS '1' OR ELSE IF YOU WANT TO GO TO STATISTIC'S MENU PRESS '2'AND IF YOU WANT TO GO TO MAIN MENU PRESS'0' ");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_mode();
    }
    if(n==2)
    {
        fun_stat();
    }
    if(n==0)
    {
        main();
    }
}
int fun_std()
{
    system("cls");
    int n;
    printf("\n\n\t\t\t\t\t\t\t\tSTANDARD DEVIATION");
    printf("\n\n\t\t\t\t(1)What is standard deviation in statistics");
    printf("\n\n\t\t\t\t(2)Calculating standard deviation");
    printf("\n\n\t\t\t\tEnter:");
    scanf("%d",&n);
    if(n==1)
    {
        fun_std_a();
    }
    if(n==2)
    {
        fun_std_b();
    }

}
int fun_std_a()
{
    system("cls");
     int n;
     printf("\n\n\t\t\t\t\t\t\tWhat is standard deviation in statistics?");
     printf("\n\nA standard deviation is a statistic that measures the dispersion of a dataset relative to its mean. The standard deviation is calculated as the square root of variance by determining each data point's deviation relative to the mean. If the data points are further from the mean, there is a higher deviation within the data set; thus, the more spread out the data, the higher the standard deviation.\nThe way of calculating it:The mean value is calculated by adding all the data points and dividing by the number of data points.The variance for each data point is calculated by subtracting the mean from the value of the data point. Each of those resulting values is then squared and the results summed. The result is then divided by the number of data points less one.The square root of the variance—result from second step is then used to find the standard deviation.");
     printf("\n\n\t\tIF YOU WANT TO GO TO ST. DEVIATION'S MENU PRESS '1' OR ELSE IF YOU WANT TO GO TO STATISTIC'S MENU PRESS '2'AND IF YOU WANT TO GO TO MAIN MENU PRESS'0' ");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_std();
    }
    if(n==2)
    {
        fun_stat();
    }
    if(n==0)
    {
        main();
    }
}
int fun_std_b()
{
      system("cls");
    int i,n;
    float avg,sum=0;
    printf("\n\n\t\t\t\t\t\t\tCalculating standard deviation");
    printf("\n\n\t\t\t\t#YOU SHOULD TRY YOURSELF FIRST,THEN COMPARE TO OURS");
    printf("\n\n\t\t\t\tHow many numbers do you want to input:");
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        printf("\n\n\t\t\t\tThe number %d position's number: ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    sum=0;
    for(i=1;i<=n;i++)
    {
        float p=a[i]-avg;
        p=pow(p,2);
        sum=sum+p;

    }
    float b=sum/n;
    float dev=sqrt(b);
    printf("\n\n\t\t\t\tStandard Deviation= %.2f\n",dev);

     printf("\n\n\t\tIF YOU WANT TO GO TO ST. DEVIATION'S MENU PRESS '1' OR ELSE IF YOU WANT TO GO TO STATISTIC'S MENU PRESS '2'AND IF YOU WANT TO GO TO MAIN MENU PRESS'0' ");
     printf("\n\n\t\t\t\tENTER:");
     scanf("%d",&n);
     if(n==1)
    {
        fun_std();
    }
    if(n==2)
    {
        fun_stat();
    }
    if(n==0)
    {
        main();
    }
}
int fun_quiz()
{
    system("cls");
    int count=0;
    for(int i=0; i<10; i++)
    {
        int s=i;
        switch(s)
        {
        case 0:
        printf("\n\nWhich of the following is a prime number");
		printf("\n\nA.12\t\tB.13\n\nC.14\t\tD.15");
		printf("\n\nENTER:");
		if (toupper(getch())=='B')
            {printf("\n\nCorrect!!!  (press enter) ");
            count=count+10;
            getch();
            break;}
		else
            {printf("\n\nWrong!!! The correct answer is B  (press enter)");
            getch();
            break;}


        case 1:
		printf("\n\n\nWhich of the following is the answer of 6! ?");
		printf("\n\nA.24\t\tB.340\n\nC.16\t\tD.720");
		printf("\n\nENTER:");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count=count+10;
			getch();
			break;}
		else
            {printf("\n\nWrong!!! The correct answer is D");
            getch();
            break;}

        case 2:
		printf("\n\n\nWhat is the LCM of 4 and 8?");
		printf("\n\nA.8\t\tB.10\n\nC.12\t\tD.14");
		printf("\n\nENTER:");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count=count+10;
			getch();
			break;}
		else
            {printf("\n\nWrong!!! The correct answer is A");
            getch();
            break;}

        case 3:
        printf("\n\n145 is a _____ number?");
		printf("\n\nA.prime\t\tB.strong\n\nC.palindrome\t\tD.perfect");
		printf("\n\nENTER:");
		if (toupper(getch())=='B')
            {printf("\n\nCorrect!!!");count=count+10;
            getch();
            break;}
		else
            {printf("\n\nWrong!!! The correct answer is B");
            getch();
            break;}

        case 4:
		printf("\n\n\nWhich of the following is not a strong number?");
		printf("\n\nA.1\t\tB.145\n\nC.2\t\tD.15");
		printf("\n\nENTER:");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count=count+10;
			getch();
			break;}
		else
            {printf("\n\nWrong!!! The correct answer is D");
            getch();
            break;}

        case 5:
        printf("\n\nHow many edges are present  in a triangle?");
		printf("\n\nA.4\t\tB.2\n\nC.3\t\tD.5");
		printf("\n\nENTER:");
		if (toupper(getch())=='C')
            {printf("\n\nCorrect!!!");count=count+10;
            getch();
            break;}
		else
            {printf("\n\nWrong!!! The correct answer is C");
            getch();
            break;}

        case 6:
		printf("\n\n\nWhat is related to circle?");
		printf("\n\nA.Square\t\tB.radius\n\nC.edge\t\tD.angle of edge");
		printf("\n\nENTER:");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count=count+10;
			getch();
			break;}
		else
            {printf("\n\nWrong!!! The correct answer is B");
            getch();
            break;}

        case 7:
        printf("\n\nWhich of the following is a perfect number?");
		printf("\n\nA.6\t\tB.28\n\nC.32\t\tD.(A and B)");
		printf("\n\nENTER:");
		if (toupper(getch())=='D')
            {printf("\n\nCorrect!!!");count=count+10;
            getch();
            break;}
		else
            {printf("\n\nWrong!!! The correct answer is D");
            getch();
            break;}

        case 8:
		printf("\n\n\nWhat is the percentage of 10 out of 20?");
		printf("\n\nA.40\t\tB.50\n\nC.60\t\tD.70");
		printf("\n\nENTER:");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count=count+10;
			getch();
			break;}
		else
            {printf("\n\nWrong!!! The correct answer is B");
            getch();
            break;}

        case 9:
		printf("\n\n\nWhich number's factorial is 5040?");
		printf("\n\nA.8\t\tB.6\n\nC.7\t\tD.9");
		printf("\n\nENTER:");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count=count+10;
			getch();
			break;}
		else
            {printf("\n\nWrong!!! The correct answer is C");
            getch();
            break;}
        }

    }
    printf("\n\n\t\t\t##Congratulations.You have got %d out of 100##",count);
    int n;
    printf("\n\n\t\t\t\tIF YOU WANT TO PLAY AGAIN PRESS'1' OR IF YOU WANT TO GOT MAIN MENU PRESS '0'");
    printf("\n\n\t\t\t\tEnter:");
    scanf("%d",&n);
    if(n==1)
    {
        fun_quiz();
    }
    if(n==0)
    {
        main();
    }

}
