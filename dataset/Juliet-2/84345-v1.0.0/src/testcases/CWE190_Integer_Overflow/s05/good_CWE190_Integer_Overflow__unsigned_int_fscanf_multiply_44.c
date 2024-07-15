void FUN0(unsigned int data)
{
    if(data > 0) 
    {
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}
void FUN1()
{
    unsigned int data;
    void (*funcPtr) (unsigned int) = FUN0;
    data = 0;
    data = 2;
    funcPtr(data);
}
void FUN2(unsigned int data)
{
    if(data > 0) 
    {
        if (data < (UINT_MAX/2))
        {
            unsigned int result = data * 2;
            printUnsignedLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
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
