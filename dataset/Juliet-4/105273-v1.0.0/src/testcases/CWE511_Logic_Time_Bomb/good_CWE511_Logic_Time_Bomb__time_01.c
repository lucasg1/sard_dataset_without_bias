void FUN0()
{
    {
        time_t currentTime;
        time(&currentTime);
        if (currentTime > TIME_CHECK)
        {
            printLine("Happy New Year!");
        }
    }
}
