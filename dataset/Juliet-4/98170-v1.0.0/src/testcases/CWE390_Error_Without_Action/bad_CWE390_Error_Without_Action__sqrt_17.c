void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
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
}
