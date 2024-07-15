void FUN0(unsigned int data)
{
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    FUN0(data);
}
