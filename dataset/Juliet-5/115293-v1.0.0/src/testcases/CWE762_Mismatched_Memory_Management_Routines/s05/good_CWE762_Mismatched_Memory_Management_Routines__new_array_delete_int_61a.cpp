namespace NAMESPACE0
{
int * FUN0(int * data)
{
    data = new int;
    return data;
}
int * FUN1(int * data)
{
    data = new int[100];
    return data;
}
} 
namespace NAMESPACE0
{
int * FUN0(int * data);
void FUN3()
{
    int * data;
    data = NULL;
    data = FUN0(data);
    delete data;
}
int * FUN1(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    data = FUN1(data);
    delete [] data;
}
} 
