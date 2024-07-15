void FUN0()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    {
        unsigned int dataCopy = data;
        unsigned int data = dataCopy;
        {
<START>
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
    }
}
