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
    data = new int[100];
    FUN1(data);
}
void FUN3(int * data);
void FUN7()
{
    int * data;
    data = NULL;
    data = new int[100];
    delete [] data;
    FUN3(data);
}
} 
namespace NAMESPACE0
{
void FUN0(int * data)
{
    delete [] data;
}
void FUN2(int * data)
{
    ; 
}
} 
