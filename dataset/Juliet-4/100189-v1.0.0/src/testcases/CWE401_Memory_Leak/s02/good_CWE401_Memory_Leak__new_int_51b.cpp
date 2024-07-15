namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1(int * data);
void FUN2()
{
    int * data;
    data = NULL;
    int VAR1;
    data = &VAR1;
    *data = 5;
    printIntLine(*data);
    FUN0(data);
}
void FUN3()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    FUN1(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
    ; 
}
void FUN1(int * data)
{
    delete data;
}
} 
