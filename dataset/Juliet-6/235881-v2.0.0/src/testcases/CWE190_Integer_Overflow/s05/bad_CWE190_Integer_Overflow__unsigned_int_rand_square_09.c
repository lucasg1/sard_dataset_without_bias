void FUN0()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        data = (unsigned int)RAND32();
    }
    if(GLOBAL_CONST_TRUE)
    {
        {
<START>
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
    }
}
