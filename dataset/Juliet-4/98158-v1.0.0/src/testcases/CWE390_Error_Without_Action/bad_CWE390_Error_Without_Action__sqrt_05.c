static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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
