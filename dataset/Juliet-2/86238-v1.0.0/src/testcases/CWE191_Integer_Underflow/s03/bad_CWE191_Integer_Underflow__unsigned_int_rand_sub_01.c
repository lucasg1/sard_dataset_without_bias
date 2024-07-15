void FUN0()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}
