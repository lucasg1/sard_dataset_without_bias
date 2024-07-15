void FUN0()
{
    goto sink;
sink:
    {
        double doubleNumber;
        errno = 0; 
        doubleNumber = (double)sqrt((double)-1);
        if (errno == EDOM)
        {
<START>
        }
<END>
        printDoubleLine(doubleNumber);
    }
}
