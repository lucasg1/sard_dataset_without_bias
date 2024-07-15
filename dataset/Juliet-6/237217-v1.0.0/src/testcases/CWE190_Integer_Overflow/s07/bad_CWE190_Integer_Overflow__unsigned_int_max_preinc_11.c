void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = UINT_MAX;
    }
    if(globalReturnsTrue())
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
