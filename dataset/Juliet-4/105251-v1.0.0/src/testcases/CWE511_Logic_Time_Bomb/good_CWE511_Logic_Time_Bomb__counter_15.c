void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
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
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
