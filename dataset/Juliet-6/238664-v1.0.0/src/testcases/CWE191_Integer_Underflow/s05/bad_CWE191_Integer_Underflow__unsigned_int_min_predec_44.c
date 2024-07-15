void FUN0(unsigned int data)
{
    {
<START>
        --data;
<END>
        unsigned int result = data;
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
