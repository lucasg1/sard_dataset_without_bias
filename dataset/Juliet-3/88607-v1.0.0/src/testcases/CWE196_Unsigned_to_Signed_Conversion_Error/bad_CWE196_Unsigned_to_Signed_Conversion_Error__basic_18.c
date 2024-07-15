void FUN0()
{
    goto sink;
sink:
    {
        unsigned intUnsigned;
        int intSigned;
        intUnsigned = rand();
        if (rand() % 2 == 0)
        {
            intUnsigned = UINT_MAX - intUnsigned;
        }
<START>
        intSigned = intUnsigned;
<END>
        printIntLine(intSigned);
    }
}
