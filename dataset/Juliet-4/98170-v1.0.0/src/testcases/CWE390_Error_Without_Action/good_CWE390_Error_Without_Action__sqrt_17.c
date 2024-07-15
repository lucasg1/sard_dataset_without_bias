void FUN0()
{
    int k;
    for(k = 0; k < 1; k++)
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
