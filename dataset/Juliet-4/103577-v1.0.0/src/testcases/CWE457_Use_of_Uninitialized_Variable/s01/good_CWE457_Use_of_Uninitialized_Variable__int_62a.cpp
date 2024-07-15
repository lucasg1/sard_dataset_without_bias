namespace NAMESPACE0
{
void FUN0(int &data)
{
    data = 5;
}
void FUN1(int &data)
{
    ; 
}
} 
namespace NAMESPACE0
{
void FUN0(int &data);
void FUN3()
{
    int data;
    FUN0(data);
    printIntLine(data);
}
void FUN1(int &data);
void FUN5()
{
    int data;
    FUN1(data);
    data = 5;
    printIntLine(data);
}
} 
