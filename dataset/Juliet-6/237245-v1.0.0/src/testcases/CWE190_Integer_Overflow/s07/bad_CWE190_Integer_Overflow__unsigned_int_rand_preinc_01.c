void FUN0()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    {
<START>
        ++data;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
