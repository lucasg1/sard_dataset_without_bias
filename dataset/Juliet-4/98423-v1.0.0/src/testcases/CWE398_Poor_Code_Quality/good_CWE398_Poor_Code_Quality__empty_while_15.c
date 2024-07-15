void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int i = 0;
        while(i++ < 10)
        {
            printLine("Inside the while statement");
        }
    }
    printLine("Hello from good()");
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        int i = 0;
        while(i++ < 10)
        {
            printLine("Inside the while statement");
        }
    }
    printLine("Hello from good()");
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
