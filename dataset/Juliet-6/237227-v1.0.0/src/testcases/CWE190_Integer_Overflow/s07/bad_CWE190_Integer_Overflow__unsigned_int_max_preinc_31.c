void FUN0()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    {
        unsigned int dataCopy = data;
        unsigned int data = dataCopy;
        {
<START>
            ++data;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
