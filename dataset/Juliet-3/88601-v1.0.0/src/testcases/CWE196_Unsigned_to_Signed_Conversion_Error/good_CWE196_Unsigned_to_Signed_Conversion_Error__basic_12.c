void FUN0()
{
    if(globalReturnsTrueOrFalse())
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
