void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            double doubleNumber;
            doubleNumber = (double)sqrt((double)-1);
<START>
<END>
            printDoubleLine(doubleNumber);
        }
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
