namespace NAMESPACE0
{
void FUN0(int64_t * &data)
{
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    FUN0(data);
    {
        int64_t source[100] = {0}; 
        memcpy(data, source, 100*sizeof(int64_t));
        printLongLongLine(data[0]);
        free(data);
    }
}
} 
