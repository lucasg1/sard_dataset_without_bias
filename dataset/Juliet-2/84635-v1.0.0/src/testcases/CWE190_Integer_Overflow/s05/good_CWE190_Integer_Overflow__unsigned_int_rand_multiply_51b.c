void FUN0(unsigned int data);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = 2;
    FUN0(data);
}
void FUN2(unsigned int data);
void FUN3()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    FUN2(data);
}
void FUN0(unsigned int data)
{
    if(data > 0) 
    {
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
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
