namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 7;
}
void FUN1(int &data)
{
    data = -5;
}
} 
namespace NAMESPACE0
{
void FUN0(int &data);
void FUN3()
{
    int data;
    data = -1;
    FUN0(data);
    {
        int buffer[10] = { 0 };
        if (data < 10)
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is too big.");
        }
    }
}
void FUN1(int &data);
void FUN5()
{
    int data;
    data = -1;
    FUN1(data);
    {
        int buffer[10] = { 0 };
        if (data >= 0 && data < (10))
        {
            printIntLine(buffer[data]);
        }
        else
        {
            printLine("ERROR: Array index is out-of-bounds");
        }
    }
}
} 
