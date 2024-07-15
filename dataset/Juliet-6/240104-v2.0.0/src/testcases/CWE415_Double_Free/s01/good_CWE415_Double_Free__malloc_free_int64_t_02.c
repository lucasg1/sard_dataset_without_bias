void FUN0()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ; 
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(1)
    {
        ; 
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
        free(data);
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(1)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(1)
    {
        free(data);
    }
}
