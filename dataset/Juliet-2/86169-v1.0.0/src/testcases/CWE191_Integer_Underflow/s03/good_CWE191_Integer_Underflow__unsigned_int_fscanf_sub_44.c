void FUN0(unsigned int data)
{
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    void (*funcPtr) (unsigned int) = FUN0;
    data = 0;
    data = -2;
    funcPtr(data);
}
void FUN2(unsigned int data)
{
    if (data > 0)
    {
        unsigned int result = data - 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform subtraction.");
    }
}
void FUN3()
{
    unsigned int data;
    void (*funcPtr) (unsigned int) = FUN2;
    data = 0;
    fscanf (stdin, "%u", &data);
    funcPtr(data);
}
