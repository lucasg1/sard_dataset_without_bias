void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        srand((unsigned)time(NULL));
        if (rand() == NUM_CHECK)
        {
            printLine("Happy New Year!");
        }
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
