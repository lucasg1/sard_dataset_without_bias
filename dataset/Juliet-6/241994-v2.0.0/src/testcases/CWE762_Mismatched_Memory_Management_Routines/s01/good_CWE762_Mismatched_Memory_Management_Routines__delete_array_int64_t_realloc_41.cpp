namespace NAMESPACE0
{
void FUN0(int64_t * data)
{
    delete [] data;
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = new int64_t[100];
    FUN0(data);
}
void FUN2(int64_t * data)
{
    free(data);
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    data = NULL;
    data = (int64_t *)realloc(data, 100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    FUN2(data);
}
} 
