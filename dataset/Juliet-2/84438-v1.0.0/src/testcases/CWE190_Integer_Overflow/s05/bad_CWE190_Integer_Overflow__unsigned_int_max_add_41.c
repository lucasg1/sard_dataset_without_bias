void FUN0(unsigned int data)
{
    {
<START>
        unsigned int result = data + 1;
<END>
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    FUN0(data);
}
