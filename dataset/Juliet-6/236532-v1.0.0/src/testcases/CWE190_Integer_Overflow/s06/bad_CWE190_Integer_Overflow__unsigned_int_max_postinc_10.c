void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalTrue)
    {
        data = UINT_MAX;
    }
    if(globalTrue)
    {
        {
<START>
            data++;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
