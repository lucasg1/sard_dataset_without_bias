void FUN0()
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
<START>
        intSigned = intUnsigned;
<END>
        printIntLine(intSigned);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
