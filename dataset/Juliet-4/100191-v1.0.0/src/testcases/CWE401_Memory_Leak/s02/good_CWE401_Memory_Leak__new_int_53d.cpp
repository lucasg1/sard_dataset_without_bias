namespace NAMESPACE0
{
void FUN0(int * data);
void FUN1(int * data)
{
    FUN0(data);
}
void FUN2(int * data);
void FUN3(int * data)
{
    FUN2(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int * data);
void FUN0(int * data)
{
    FUN4(data);
}
void FUN6(int * data);
void FUN2(int * data)
{
    FUN6(data);
}
} 
namespace NAMESPACE0
{
void FUN1(int * data);
void FUN9()
{
    int * data;
    data = NULL;
    int VAR3;
    data = &VAR3;
    *data = 5;
    printIntLine(*data);
    FUN1(data);
}
void FUN3(int * data);
void FUN11()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN4(int * data)
{
    ; 
}
void FUN6(int * data)
{
    delete data;
}
} 
