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
    data = UINT_MAX;
    FUN2(data);
}
void FUN5(unsigned int data);
void FUN0(unsigned int data)
{
    FUN5(data);
}
void FUN7(unsigned int data);
void FUN2(unsigned int data)
{
    FUN7(data);
}
void FUN9(unsigned int data);
void FUN5(unsigned int data)
{
    FUN9(data);
}
void FUN11(unsigned int data);
void FUN7(unsigned int data)
{
    FUN11(data);
}
void FUN9(unsigned int data)
{
    if(data > 0) 
    {
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}
void FUN11(unsigned int data)
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
