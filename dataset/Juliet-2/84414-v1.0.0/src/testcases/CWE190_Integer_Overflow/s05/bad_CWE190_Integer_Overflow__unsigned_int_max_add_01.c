void FUN0()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    {
<START>
        unsigned int result = data + 1;
<END>
        printUnsignedLine(result);
    }
}
