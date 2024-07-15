namespace NAMESPACE0
{
int64_t * FUN0(int64_t * data)
{
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    return data;
}
int64_t * FUN1(int64_t * data)
{
    data = new int64_t[100];
    return data;
}
} 
namespace NAMESPACE0
{
int64_t * FUN0(int64_t * data);
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = FUN0(data);
    free(data);
}
int64_t * FUN1(int64_t * data);
void FUN5()
{
    int64_t * data;
    data = NULL;
    data = FUN1(data);
    delete [] data;
}
} 
