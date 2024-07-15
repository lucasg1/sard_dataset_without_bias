namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int;
    *data = 5;
}
void FUN1(int * &data)
{
    data = new int;
    *data = 5;
    delete data;
}
} 
namespace NAMESPACE0
{
void FUN0(int * &data);
void FUN3()
{
    int * data;
    data = NULL;
    FUN0(data);
    printIntLine(*data);
}
void FUN1(int * &data);
void FUN5()
{
    int * data;
    data = NULL;
    FUN1(data);
    ; 
}
} 
