namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 5;
    printIntLine(data);
}
void FUN1()
{
    int data;
    FUN0(data);
    data = 10;
    printIntLine(data);
}
void FUN2(int &data)
{
    data = 5;
}
void FUN3()
{
    int data;
    FUN2(data);
    printIntLine(data);
}
} 
