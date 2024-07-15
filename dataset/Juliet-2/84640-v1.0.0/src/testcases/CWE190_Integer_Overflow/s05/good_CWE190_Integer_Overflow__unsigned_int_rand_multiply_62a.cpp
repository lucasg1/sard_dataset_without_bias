namespace NAMESPACE0
{
void FUN0(unsigned int &data)
{
    data = 2;
}
void FUN1(unsigned int &data)
{
    data = (unsigned int)RAND32();
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
    if(data > 0) 
    {
        unsigned int result = data * 2;
        printUnsignedLine(result);
    }
}
void FUN1(unsigned int &data);
void FUN5()
{
    unsigned int data;
    data = 0;
    FUN1(data);
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
} 
