void FUN0()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (unsigned int)RAND32();
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
<START>
            data++;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
