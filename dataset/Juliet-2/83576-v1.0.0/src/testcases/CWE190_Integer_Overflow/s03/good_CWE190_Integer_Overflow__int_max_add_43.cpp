namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 2;
}
void FUN1()
{
    int data;
    data = 0;
    FUN0(data);
    {
        int result = data + 1;
        printIntLine(result);
    }
}
void FUN2(int &data)
{
    data = INT_MAX;
}
void FUN3()
{
    int data;
    data = 0;
    FUN2(data);
    if (data < INT_MAX)
    {
        int result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
} 
