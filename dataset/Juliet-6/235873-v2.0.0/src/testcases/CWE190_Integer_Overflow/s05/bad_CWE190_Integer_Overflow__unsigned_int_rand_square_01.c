void FUN0()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
