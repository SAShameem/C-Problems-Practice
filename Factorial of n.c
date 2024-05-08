// Factorial of n
int main()
{
    int n,i,fact=1;
    printf(":::::::::::::::Factorial of N ::::::::::::::::\n");
    printf("Enter The Value of N:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        {
            fact=fact*i;

        }
    printf("The Factorial of %d is : %d \n",n,fact);

    return 0;
}
