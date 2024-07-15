void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        time_t currentTime;
        time(&currentTime);
        if (currentTime > TIME_CHECK)
        {
            printLine("Happy New Year!");
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
        time_t currentTime;
        time(&currentTime);
        if (currentTime > TIME_CHECK)
        {
            printLine("Happy New Year!");
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
