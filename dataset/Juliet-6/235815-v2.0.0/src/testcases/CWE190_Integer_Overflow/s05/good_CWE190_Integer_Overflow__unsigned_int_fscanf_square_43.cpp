namespace NAMESPACE0
{
void FUN0(unsigned int &data)
{
    data = 2;
}
void FUN1()
{
    unsigned int data;
    data = 0;
    FUN0(data);
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
}
void FUN2(unsigned int &data)
{
    fscanf (stdin, "%u", &data);
}
void FUN3()
{
    unsigned int data;
    data = 0;
    FUN2(data);
    if (abs((long)data) < (long)sqrt((double)UINT_MAX))
    {
        unsigned int result = data * data;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 
