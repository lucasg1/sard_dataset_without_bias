void FUN0()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
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
    }
}
void FUN1()
{
    if(globalTrue)
    {
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
    }
}
