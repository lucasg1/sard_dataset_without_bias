void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
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
}
