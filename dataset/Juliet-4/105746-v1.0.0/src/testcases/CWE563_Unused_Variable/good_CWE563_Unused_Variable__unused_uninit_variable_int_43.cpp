namespace NAMESPACE0
{
void FUN0(int &data)
{
    ; 
}
void FUN1()
{
    int data;
    FUN0(data);
    data = 5;
    printIntLine(data);
}
} 
