static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            long longNumber;
            longNumber = 0x10203040;
            longNumber |= LONG_MIN;
            printIntLine(longNumber);
        }
    }
}
void FUN1()
{
    if(STATIC_CONST_TRUE)
    {
        {
            long longNumber;
            longNumber = 0x10203040;
            longNumber |= LONG_MIN;
            printIntLine(longNumber);
        }
    }
}
