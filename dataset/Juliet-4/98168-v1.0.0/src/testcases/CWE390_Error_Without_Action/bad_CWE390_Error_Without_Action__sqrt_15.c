void FUN0()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
