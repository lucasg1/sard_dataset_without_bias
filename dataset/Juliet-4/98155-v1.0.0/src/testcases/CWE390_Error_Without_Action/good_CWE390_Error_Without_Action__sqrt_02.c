void FUN0()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            double doubleNumber;
            errno = 0; 
            doubleNumber = (double)sqrt((double)-1);
            if (errno == EDOM)
            {
                printLine("sqrt() failed");
                exit(1);
            }
            printDoubleLine(doubleNumber);
        }
    }
}
void FUN1()
{
    if(1)
    {
        {
            double doubleNumber;
            errno = 0; 
            doubleNumber = (double)sqrt((double)-1);
            if (errno == EDOM)
            {
                printLine("sqrt() failed");
                exit(1);
            }
            printDoubleLine(doubleNumber);
        }
    }
}
