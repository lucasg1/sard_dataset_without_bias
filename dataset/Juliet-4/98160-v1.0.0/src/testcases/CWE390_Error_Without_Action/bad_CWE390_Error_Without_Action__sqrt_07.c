static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
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
