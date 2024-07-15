void FUN0(unsigned int data);
void FUN1(unsigned int data)
{
    FUN0(data);
}
void FUN2(unsigned int data);
void FUN3(unsigned int data)
{
    FUN2(data);
}
void FUN4(unsigned int data);
void FUN0(unsigned int data)
{
    FUN4(data);
}
void FUN6(unsigned int data);
void FUN2(unsigned int data)
{
    FUN6(data);
}
void FUN1(unsigned int data);
void FUN9()
{
    unsigned int data;
    data = 0;
    data = 2;
    FUN1(data);
}
void FUN3(unsigned int data);
void FUN11()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    FUN3(data);
}
void FUN4(unsigned int data)
{
    if(data > 0) 
    {
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}
void FUN6(unsigned int data)
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
