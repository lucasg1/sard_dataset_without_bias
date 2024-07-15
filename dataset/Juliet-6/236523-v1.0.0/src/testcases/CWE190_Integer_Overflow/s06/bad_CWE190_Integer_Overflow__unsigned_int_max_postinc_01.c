void FUN0()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    {
<START>
        data++;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
