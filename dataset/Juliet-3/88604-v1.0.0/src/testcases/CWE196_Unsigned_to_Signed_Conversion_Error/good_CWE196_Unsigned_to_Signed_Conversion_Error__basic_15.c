void FUN0()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        unsigned intUnsigned;
        int intSigned;
        intUnsigned = rand();
        if (rand() % 2 == 0)
        {
            intUnsigned = UINT_MAX - intUnsigned;
        }
        if (intUnsigned > INT_MAX)
        {
            exit(1);
        }
        intSigned = intUnsigned;
        printIntLine(intSigned);
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
        unsigned intUnsigned;
        int intSigned;
        intUnsigned = rand();
        if (rand() % 2 == 0)
        {
            intUnsigned = UINT_MAX - intUnsigned;
        }
        if (intUnsigned > INT_MAX)
        {
            exit(1);
        }
        intSigned = intUnsigned;
        printIntLine(intSigned);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
