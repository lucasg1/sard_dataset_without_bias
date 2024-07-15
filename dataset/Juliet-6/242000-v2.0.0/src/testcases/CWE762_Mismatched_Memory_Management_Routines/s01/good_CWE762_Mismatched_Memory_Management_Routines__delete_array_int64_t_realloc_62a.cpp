namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = new int64_t[100];
}
void FUN1(int64_t * &data)
{
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
}
} 
namespace NAMESPACE0
{
void FUN0(int64_t * &data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
    delete [] data;
}
void FUN1(int64_t * &data);
void FUN5()
{
    int64_t * data;
    data = NULL;
    FUN1(data);
    free(data);
}
} 
