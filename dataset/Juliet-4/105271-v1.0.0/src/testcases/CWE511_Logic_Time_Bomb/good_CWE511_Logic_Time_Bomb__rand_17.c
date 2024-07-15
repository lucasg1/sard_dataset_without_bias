void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        srand((unsigned)time(NULL));
        if (rand() == NUM_CHECK)
        {
            printLine("Happy New Year!");
        }
    }
}
