namespace NAMESPACE0
{
void FUN0(short &data)
{
    data = 2;
}
void FUN1(short &data)
{
    fscanf (stdin, "%hd", &data);
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
    if(data > 0) 
    {
        short result = data * 2;
        printIntLine(result);
    }
}
void FUN1(short &data);
void FUN5()
{
    short data;
    data = 0;
    FUN1(data);
    if(data > 0) 
    {
        if (data < (SHRT_MAX/2))
        {
            short result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
