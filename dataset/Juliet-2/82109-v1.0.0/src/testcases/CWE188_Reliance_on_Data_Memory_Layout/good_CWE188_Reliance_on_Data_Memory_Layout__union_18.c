void FUN0()
{
    goto sink;
sink:
    {
        long longNumber;
        longNumber = 0x10203040;
        longNumber |= LONG_MIN;
        printIntLine(longNumber);
    }
}
