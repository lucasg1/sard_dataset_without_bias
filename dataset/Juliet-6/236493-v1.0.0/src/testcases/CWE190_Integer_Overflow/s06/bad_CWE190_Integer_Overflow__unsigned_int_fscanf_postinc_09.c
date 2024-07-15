void FUN0()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_TRUE)
    {
        fscanf (stdin, "%u", &data);
    }
    if(GLOBAL_CONST_TRUE)
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
