static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN1())
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
void FUN3()
{
    if(FUN0())
    {
        srand((unsigned)time(NULL));
        if (rand() == NUM_CHECK)
        {
            printLine("Happy New Year!");
        }
    }
}
