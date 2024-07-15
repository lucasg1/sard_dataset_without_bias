namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = 2;
}
void FUN1(short &data)
{
    data = (short)RAND32();
}
} 
namespace NAMESPACE0
{
void FUN0(short &data);
void FUN3()
{
    short data;
    data = 0;
    FUN0(data);
    {
        short result = data + 1;
        printIntLine(result);
    }
}
void FUN1(short &data);
void FUN5()
{
    short data;
    data = 0;
    FUN1(data);
    if (data < SHRT_MAX)
    {
        short result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 
