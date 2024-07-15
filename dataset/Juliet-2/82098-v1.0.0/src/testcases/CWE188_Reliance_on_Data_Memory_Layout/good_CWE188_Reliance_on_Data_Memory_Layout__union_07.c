static int staticFive = 5;
void FUN0()
{
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        {
            long longNumber;
            longNumber = 0x10203040;
            longNumber |= LONG_MIN;
            printIntLine(longNumber);
        }
    }
}
