namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        data = NULL;
        data = (int64_t *)realloc(data, 100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        data = new int64_t;
        break;
    }
    while(1)
    {
        delete data;
        break;
    }
}
} 
