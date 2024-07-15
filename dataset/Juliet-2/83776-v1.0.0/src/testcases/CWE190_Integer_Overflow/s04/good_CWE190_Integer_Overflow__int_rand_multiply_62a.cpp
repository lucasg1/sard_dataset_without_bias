namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 2;
}
void FUN1(int &data)
{
    data = RAND32();
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
    if(data > 0) 
    {
        int result = data * 2;
        printIntLine(result);
    }
}
void FUN1(int &data);
void FUN5()
{
    int data;
    data = 0;
    FUN1(data);
    if(data > 0) 
    {
        if (data < (INT_MAX/2))
        {
            int result = data * 2;
            printIntLine(result);
        }
        else
        {
            printLine("data value is too large to perform arithmetic safely.");
        }
    }
}
} 
