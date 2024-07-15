namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = new int64_t;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
    delete data;
}
void FUN2(int64_t * &data)
{
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    FUN2(data);
    free(data);
}
} 
