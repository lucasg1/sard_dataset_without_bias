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
    if(staticFive==5)
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
