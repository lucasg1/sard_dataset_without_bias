void FUN0()
{
    unsigned int data;
    data = 0;
    if(1)
    {
        data = (unsigned int)RAND32();
    }
    if(1)
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
