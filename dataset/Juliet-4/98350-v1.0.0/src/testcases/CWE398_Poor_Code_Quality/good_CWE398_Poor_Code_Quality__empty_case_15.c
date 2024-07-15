void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        int x = (rand() % 3);
        switch (x)
        {
        case 0:
            printLine("Inside the case statement");
            break;
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
        int x = (rand() % 3);
        switch (x)
        {
        case 0:
            printLine("Inside the case statement");
            break;
        }
    }
    printLine("Hello from good()");
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
