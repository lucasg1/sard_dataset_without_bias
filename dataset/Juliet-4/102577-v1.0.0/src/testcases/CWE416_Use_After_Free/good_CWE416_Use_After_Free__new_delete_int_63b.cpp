namespace NAMESPACE0
{
void FUN0(int * * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    FUN0(&data);
}
void FUN2(int * * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    delete data;
    FUN2(&data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * * dataPtr)
{
    int * data = *dataPtr;
    printIntLine(*data);
}
void FUN2(int * * dataPtr)
{
    int * data = *dataPtr;
    ; 
}
} 
