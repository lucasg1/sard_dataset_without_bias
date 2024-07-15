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
void FUN5()
{
    int * data;
    data = NULL;
    int VAR2[100];
    data = VAR2;
    data[0] = 5;
    printIntLine(data[0]);
    FUN1(data);
}
void FUN3(int * data);
void FUN7()
{
    int * data;
    data = NULL;
    data = new int[100];
    data[0] = 5;
    printIntLine(data[0]);
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN9(int * data);
void FUN0(int * data)
{
    FUN9(data);
}
void FUN11(int * data);
void FUN2(int * data)
{
    FUN11(data);
}
} 
namespace NAMESPACE0
{
void FUN9(int * data)
{
    ; 
}
void FUN11(int * data)
{
    delete[] data;
}
} 
