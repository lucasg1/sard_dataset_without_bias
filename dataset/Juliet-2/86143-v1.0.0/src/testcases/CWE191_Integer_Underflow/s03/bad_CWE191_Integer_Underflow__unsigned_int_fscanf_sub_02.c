void FUN0()
{
    unsigned int data;
    data = 0;
    if(1)
    {
        fscanf (stdin, "%u", &data);
    }
    if(1)
    {
        {
<START>
            unsigned int result = data - 1;
<END>
            printUnsignedLine(result);
        }
    }
}
