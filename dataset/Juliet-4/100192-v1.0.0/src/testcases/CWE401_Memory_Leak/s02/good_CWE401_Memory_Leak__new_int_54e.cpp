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
void FUN1(int * data);
void FUN5(int * data)
{
    FUN1(data);
}
void FUN3(int * data);
void FUN7(int * data)
{
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN5(int * data);
void FUN9()
{
    int * data;
    data = NULL;
    int VAR3;
    data = &VAR3;
    *data = 5;
    printIntLine(*data);
    FUN5(data);
}
void FUN7(int * data);
void FUN11()
{
    int * data;
    data = NULL;
    data = new int;
    *data = 5;
    printIntLine(*data);
    FUN7(data);
}
} 
namespace NAMESPACE0
{
void FUN13(int * data);
void FUN0(int * data)
{
    FUN13(data);
}
void FUN15(int * data);
void FUN2(int * data)
{
    FUN15(data);
}
} 
namespace NAMESPACE0
{
void FUN13(int * data)
{
    ; 
}
void FUN15(int * data)
{
    delete data;
}
} 
