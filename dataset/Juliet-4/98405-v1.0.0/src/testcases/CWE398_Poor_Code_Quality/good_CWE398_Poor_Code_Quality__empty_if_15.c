void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int x;
        x = (rand() % 3);
        if (x == 0)
        {
            printLine("Inside the if statement");
        }
        else
        {
            printLine("Inside the else statement");
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
        int x;
        x = (rand() % 3);
        if (x == 0)
        {
            printLine("Inside the if statement");
        }
        else
        {
            printLine("Inside the else statement");
        }
    }
    printLine("Hello from good()");
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
