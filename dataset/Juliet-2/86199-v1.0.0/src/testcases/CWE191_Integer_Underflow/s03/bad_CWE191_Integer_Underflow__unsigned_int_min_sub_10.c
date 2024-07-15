void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalTrue)
    {
        data = 0;
    }
    if(globalTrue)
    {
        {
<START>
            unsigned int result = data - 1;
<END>
            printUnsignedLine(result);
        }
    }
}
