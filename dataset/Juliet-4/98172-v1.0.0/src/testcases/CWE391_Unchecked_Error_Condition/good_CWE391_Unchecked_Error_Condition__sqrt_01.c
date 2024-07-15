void FUN0()
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
