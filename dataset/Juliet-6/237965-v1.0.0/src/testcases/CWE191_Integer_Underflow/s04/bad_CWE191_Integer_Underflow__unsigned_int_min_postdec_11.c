void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalReturnsTrue())
    {
        data = 0;
    }
    if(globalReturnsTrue())
    {
        {
<START>
            data--;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
