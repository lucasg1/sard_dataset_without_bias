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
        {
<START>
            --data;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
