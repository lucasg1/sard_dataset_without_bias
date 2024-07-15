void FUN0()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    {
<START>
        data--;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
