void FUN0()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}
