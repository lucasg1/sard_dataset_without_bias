void FUN0()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    {
        unsigned int dataCopy = data;
        unsigned int data = dataCopy;
        if(data > 0) 
        {
<START>
            unsigned int result = data * 2;
<END>
            printUnsignedLine(result);
        }
    }
}
