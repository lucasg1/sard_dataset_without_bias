static unsigned int FUN0(unsigned int data)
{
    fscanf (stdin, "%u", &data);
    return data;
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = FUN0(data);
    {
<START>
        --data;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}
