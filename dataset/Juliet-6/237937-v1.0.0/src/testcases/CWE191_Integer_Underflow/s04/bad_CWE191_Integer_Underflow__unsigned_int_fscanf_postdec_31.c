void FUN0()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    {
        unsigned int dataCopy = data;
        unsigned int data = dataCopy;
        {
<START>
            data--;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
