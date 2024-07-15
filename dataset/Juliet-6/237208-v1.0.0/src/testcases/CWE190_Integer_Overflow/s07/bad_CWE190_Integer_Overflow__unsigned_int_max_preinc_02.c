void FUN0()
{
    unsigned int data;
    data = 0;
    if(1)
    {
        data = UINT_MAX;
    }
    if(1)
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
