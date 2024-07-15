namespace NAMESPACE0
{
static int64_t * FUN0(int64_t * data)
{
    data = new int64_t;
    return data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = FUN0(data);
    delete data;
}
static int64_t * FUN2(int64_t * data)
{
    data = new int64_t[100];
    return data;
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = FUN2(data);
    delete [] data;
}
} 
