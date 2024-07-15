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
            data--;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
