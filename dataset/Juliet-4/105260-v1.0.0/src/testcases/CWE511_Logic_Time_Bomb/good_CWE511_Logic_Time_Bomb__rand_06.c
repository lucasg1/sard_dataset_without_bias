static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        srand((unsigned)time(NULL));
        if (rand() == NUM_CHECK)
        {
            printLine("Happy New Year!");
        }
    }
}
