void FUN0()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
