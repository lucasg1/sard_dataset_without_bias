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
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
    }
}
