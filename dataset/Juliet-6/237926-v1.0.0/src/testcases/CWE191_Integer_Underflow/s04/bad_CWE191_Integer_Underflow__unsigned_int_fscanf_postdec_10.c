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
            data--;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
