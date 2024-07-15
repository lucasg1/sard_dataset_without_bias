void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalFive==5)
    {
        data = UINT_MAX;
    }
    if(globalFive==5)
    {
        {
<START>
            ++data;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
