namespace NAMESPACE0
{
void FUN0(unsigned int &data)
{
    data = 2;
}
void FUN1(unsigned int &data)
{
    data = UINT_MAX;
}
} 
namespace NAMESPACE0
{
void FUN0(unsigned int &data);
void FUN3()
{
    unsigned int data;
    data = 0;
    FUN0(data);
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
}
void FUN1(unsigned int &data);
void FUN5()
{
    unsigned int data;
    data = 0;
    FUN1(data);
    if (data < UINT_MAX)
    {
        unsigned int result = data + 1;
        printUnsignedLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 
