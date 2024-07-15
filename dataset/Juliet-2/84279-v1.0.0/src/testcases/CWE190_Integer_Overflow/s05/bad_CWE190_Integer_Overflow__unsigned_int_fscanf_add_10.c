void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalTrue)
    {
        fscanf (stdin, "%u", &data);
    }
    if(globalTrue)
    {
        {
<START>
            unsigned int result = data + 1;
<END>
            printUnsignedLine(result);
        }
    }
}
