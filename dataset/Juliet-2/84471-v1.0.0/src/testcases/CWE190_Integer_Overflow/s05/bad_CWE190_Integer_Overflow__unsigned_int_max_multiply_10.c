void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalTrue)
    {
        data = UINT_MAX;
    }
    if(globalTrue)
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
