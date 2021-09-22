int main()
{
    int c,d,temp;
    printf("\nEnter C and D numbers: ");
    scanf("%d %d", &c,&d);
    
    temp = c;
    c = d;
    d = temp;
    printf("C = %d D = %d\n", c,d);
    return 0;
}
