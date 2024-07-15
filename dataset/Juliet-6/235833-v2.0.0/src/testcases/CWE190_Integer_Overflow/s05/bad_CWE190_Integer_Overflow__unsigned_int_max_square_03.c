void FUN0()
{
    unsigned int data;
    data = 0;
    if(5==5)
    {
        data = UINT_MAX;
    }
    if(5==5)
    {
        {
<START>
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
    }
}
