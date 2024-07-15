namespace NAMESPACE0
{
void FUN0()
{
    int i,k;
    int64_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (int64_t *)calloc(100, sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    for(k = 0; k < 1; k++)
    {
        free(data);
    }
}
void FUN1()
{
    int h,j;
    int64_t * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new int64_t;
    }
    for(j = 0; j < 1; j++)
    {
        delete data;
    }
}
} 
