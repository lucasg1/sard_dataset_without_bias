void FUN0()
{
    if(0)
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
    if(1)
    {
        {
            long longNumber;
            longNumber = 0x10203040;
            longNumber |= LONG_MIN;
            printIntLine(longNumber);
        }
    }
}
