namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    data = new int64_t;
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        delete data;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)calloc(100, sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    {
        int64_t * dataCopy = data;
        int64_t * data = dataCopy;
        free(data);
    }
}
} 
