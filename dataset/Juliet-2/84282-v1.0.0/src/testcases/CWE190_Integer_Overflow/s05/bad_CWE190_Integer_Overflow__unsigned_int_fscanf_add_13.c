void FUN0()
{
    unsigned int data;
    data = 0;
    if(GLOBAL_CONST_FIVE==5)
    {
        fscanf (stdin, "%u", &data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        {
<START>
            unsigned int result = data + 1;
<END>
            printUnsignedLine(result);
        }
    }
}
