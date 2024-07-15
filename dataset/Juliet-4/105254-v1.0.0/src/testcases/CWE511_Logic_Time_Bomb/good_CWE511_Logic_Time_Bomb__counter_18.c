void FUN0()
{
    goto sink;
sink:
    {
        int count = 0;
        do
        {
            if (count == COUNT_CHECK)
            {
                printLine("Happy New Year!");
            }
            count++;
        }
        while(1 == 1);   
    }
}
