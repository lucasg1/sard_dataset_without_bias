void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        long longNumber;
        longNumber = 0x10203040;
        longNumber |= LONG_MIN;
        printIntLine(longNumber);
    }
    break;
    }
}
void FUN1()
{
    switch(6)
    {
    case 6:
    {
        long longNumber;
        longNumber = 0x10203040;
        longNumber |= LONG_MIN;
        printIntLine(longNumber);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
