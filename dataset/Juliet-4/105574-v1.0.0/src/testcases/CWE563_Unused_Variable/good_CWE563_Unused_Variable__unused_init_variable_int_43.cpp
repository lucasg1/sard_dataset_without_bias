namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 5;
}
void FUN1()
{
    int data;
    FUN0(data);
    printIntLine(data);
}
} 
