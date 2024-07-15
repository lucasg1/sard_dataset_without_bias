namespace NAMESPACE0
{
int64_t * FUN0(int64_t * data)
{
    data = new int64_t;
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
    delete data;
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
