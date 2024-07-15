void FUN0()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = UINT_MAX;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
<START>
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
    }
}
