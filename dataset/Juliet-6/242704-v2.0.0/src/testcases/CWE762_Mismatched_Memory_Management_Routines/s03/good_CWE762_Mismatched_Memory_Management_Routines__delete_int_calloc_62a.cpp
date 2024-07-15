namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int;
}
void FUN1(int * &data)
{
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
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
    delete data;
}
void FUN1(int * &data);
void FUN5()
{
    int * data;
    data = NULL;
    FUN1(data);
    free(data);
}
} 
