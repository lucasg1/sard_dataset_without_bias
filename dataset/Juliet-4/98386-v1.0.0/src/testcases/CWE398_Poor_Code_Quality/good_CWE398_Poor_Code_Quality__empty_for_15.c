void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int i;
        for (i = 0; i < 10; i++)
        {
            printLine("Inside the for statement");
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
        int i;
        for (i = 0; i < 10; i++)
        {
            printLine("Inside the for statement");
        }
    }
    printLine("Hello from good()");
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
