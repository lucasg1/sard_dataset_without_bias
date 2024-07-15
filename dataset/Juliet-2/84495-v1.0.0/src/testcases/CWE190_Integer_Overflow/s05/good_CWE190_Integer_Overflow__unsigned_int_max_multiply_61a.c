unsigned int FUN0(unsigned int data)
{
    data = 2;
    return data;
}
unsigned int FUN1(unsigned int data)
{
    data = UINT_MAX;
    return data;
}
unsigned int FUN0(unsigned int data);
void FUN3()
{
    unsigned int data;
    data = 0;
    data = FUN0(data);
    if(data > 0) 
    {
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}
unsigned int FUN1(unsigned int data);
void FUN5()
{
    unsigned int data;
    data = 0;
    data = FUN1(data);
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
