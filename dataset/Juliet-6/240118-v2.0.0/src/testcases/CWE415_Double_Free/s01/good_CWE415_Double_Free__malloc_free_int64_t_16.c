void FUN0()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        free(data);
        break;
    }
    while(1)
    {
        ; 
        break;
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    while(1)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        break;
    }
    while(1)
    {
        free(data);
        break;
    }
}
