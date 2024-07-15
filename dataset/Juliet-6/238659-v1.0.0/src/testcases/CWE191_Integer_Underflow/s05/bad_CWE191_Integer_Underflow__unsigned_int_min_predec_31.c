void FUN0()
{
    unsigned int data;
    data = 0;
    data = 0;
    {
        unsigned int dataCopy = data;
        unsigned int data = dataCopy;
        {
<START>
            --data;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
