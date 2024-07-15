static unsigned int FUN0(unsigned int data)
{
    data = UINT_MAX;
    return data;
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = FUN0(data);
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
