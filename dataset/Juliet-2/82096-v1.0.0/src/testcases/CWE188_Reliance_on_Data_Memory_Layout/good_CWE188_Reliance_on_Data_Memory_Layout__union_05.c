static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticFalse)
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
    if(staticTrue)
    {
        {
            long longNumber;
            longNumber = 0x10203040;
            longNumber |= LONG_MIN;
            printIntLine(longNumber);
        }
    }
}
