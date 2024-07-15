void FUN0()
{
    unsigned int data;
    data = 0;
    if(5==5)
    {
        data = UINT_MAX;
    }
    if(5==5)
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
