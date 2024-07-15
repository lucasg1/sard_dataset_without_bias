void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = UINT_MAX;
    }
    if(globalReturnsTrue())
    {
        if(data > 0) 
        {
<START>
            unsigned int result = data * 2;
<END>
            printUnsignedLine(result);
        }
    }
}
