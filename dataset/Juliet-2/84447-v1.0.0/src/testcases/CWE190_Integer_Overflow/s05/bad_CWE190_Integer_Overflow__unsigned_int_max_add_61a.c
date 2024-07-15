unsigned int FUN0(unsigned int data)
{
    data = UINT_MAX;
    return data;
}
unsigned int FUN0(unsigned int data);
void FUN2()
{
    unsigned int data;
    data = 0;
    data = FUN0(data);
    {
<START>
        unsigned int result = data + 1;
<END>
        printUnsignedLine(result);
    }
}
