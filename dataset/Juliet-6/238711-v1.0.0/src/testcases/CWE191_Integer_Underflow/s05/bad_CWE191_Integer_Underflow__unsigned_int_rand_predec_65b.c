void FUN0(unsigned int data);
void FUN1()
{
    unsigned int data;
    void (*funcPtr) (unsigned int) = FUN0;
    data = 0;
    data = (unsigned int)RAND32();
    funcPtr(data);
}
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
