void FUN0()
{
    goto sink;
sink:
    {
        time_t currentTime;
        time(&currentTime);
        if (currentTime > TIME_CHECK)
        {
            printLine("Happy New Year!");
        }
    }
}
