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
    void (*funcPtr) (unsigned int) = FUN0;
    data = 0;
    fscanf (stdin, "%u", &data);
    funcPtr(data);
}
