void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalFive==5)
    {
        data = UINT_MAX;
    }
    if(globalFive==5)
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
