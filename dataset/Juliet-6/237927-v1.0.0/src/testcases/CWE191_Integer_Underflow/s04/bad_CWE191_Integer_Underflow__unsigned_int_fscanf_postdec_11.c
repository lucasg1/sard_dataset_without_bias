void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalReturnsTrue())
    {
        fscanf (stdin, "%u", &data);
    }
    if(globalReturnsTrue())
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
