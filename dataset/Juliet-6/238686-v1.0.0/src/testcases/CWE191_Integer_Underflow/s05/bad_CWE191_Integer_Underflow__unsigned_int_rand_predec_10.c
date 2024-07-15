void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalTrue)
    {
        data = (unsigned int)RAND32();
    }
    if(globalTrue)
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
