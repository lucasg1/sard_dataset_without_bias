void FUN0(unsigned int data)
{
    {
        --data;
        unsigned int result = data;
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
        --data;
        unsigned int result = data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
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
