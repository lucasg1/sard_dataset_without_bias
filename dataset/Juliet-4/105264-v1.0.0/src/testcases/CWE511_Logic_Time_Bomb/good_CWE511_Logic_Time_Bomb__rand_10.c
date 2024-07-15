void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        srand((unsigned)time(NULL));
        if (rand() == NUM_CHECK)
        {
            printLine("Happy New Year!");
        }
    }
}
void FUN1()
{
    if(globalTrue)
    {
        srand((unsigned)time(NULL));
        if (rand() == NUM_CHECK)
        {
            printLine("Happy New Year!");
        }
    }
}
