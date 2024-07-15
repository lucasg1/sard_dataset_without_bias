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
            printLine("0");
            break;
        case 1:
            printLine("1");
            break;
        case 2:
            printLine("2");
            break;
        default:
            printLine("Invalid Number");
            break;
        }
    }
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
            printLine("0");
            break;
        case 1:
            printLine("1");
            break;
        case 2:
            printLine("2");
            break;
        default:
            printLine("Invalid Number");
            break;
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
