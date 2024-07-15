namespace NAMESPACE0
{
void FUN0(int data);
void FUN1(int data)
{
    FUN0(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int data);
void FUN3(int data)
{
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN3(int data);
void FUN5()
{
    int data;
    data = -1;
    data = 10;
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int data);
void FUN0(int data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN6(int data)
{
    {
        int i;
        int * buffer = new int[10];
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        if (data >= 0)
        {
<START>
            buffer[data] = 1;
<END>
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        delete[] buffer;
    }
}
} 
