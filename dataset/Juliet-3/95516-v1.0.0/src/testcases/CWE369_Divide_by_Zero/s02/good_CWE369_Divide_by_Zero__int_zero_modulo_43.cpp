namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 7;
}
void FUN1()
{
    int data;
    data = -1;
    FUN0(data);
    printIntLine(100 % data);
}
void FUN2(int &data)
{
    data = 0;
}
void FUN3()
{
    int data;
    data = -1;
    FUN2(data);
    if( data != 0 )
    {
        printIntLine(100 % data);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
} 
