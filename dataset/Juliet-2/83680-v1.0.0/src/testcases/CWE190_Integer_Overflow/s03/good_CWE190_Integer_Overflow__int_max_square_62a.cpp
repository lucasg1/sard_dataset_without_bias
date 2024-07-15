namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 2;
}
void FUN1(int &data)
{
    data = INT_MAX;
}
} 
namespace NAMESPACE0
{
void FUN0(int &data);
void FUN3()
{
    int data;
    data = 0;
    FUN0(data);
    {
        int result = data * data;
        printIntLine(result);
    }
}
void FUN1(int &data);
void FUN5()
{
    int data;
    data = 0;
    FUN1(data);
    if (abs((long)data) <= (long)sqrt((double)INT_MAX))
    {
        int result = data * data;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 
