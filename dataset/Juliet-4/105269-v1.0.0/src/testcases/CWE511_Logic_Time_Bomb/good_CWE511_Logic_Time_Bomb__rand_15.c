void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        srand((unsigned)time(NULL));
        if (rand() == NUM_CHECK)
        {
            printLine("Happy New Year!");
        }
        break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
        srand((unsigned)time(NULL));
        if (rand() == NUM_CHECK)
        {
            printLine("Happy New Year!");
        }
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
