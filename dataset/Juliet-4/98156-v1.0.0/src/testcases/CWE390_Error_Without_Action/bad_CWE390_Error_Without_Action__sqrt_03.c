void FUN0()
{
    if(5==5)
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
