namespace NAMESPACE0
{
int * FUN0(int * data)
{
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    return data;
}
int * FUN1(int * data)
{
    data = new int;
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
    free(data);
}
int * FUN1(int * data);
void FUN5()
{
    int * data;
    data = NULL;
    data = FUN1(data);
    delete data;
}
} 
