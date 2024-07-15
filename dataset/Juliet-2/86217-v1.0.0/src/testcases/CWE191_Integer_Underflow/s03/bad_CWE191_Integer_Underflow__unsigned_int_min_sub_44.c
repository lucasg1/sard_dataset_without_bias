void FUN0(unsigned int data)
{
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    void (*funcPtr) (unsigned int) = FUN0;
    data = 0;
    data = 0;
    funcPtr(data);
}
