static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(staticFalse)
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
    if(staticTrue)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        free(data);
    }
    if(staticTrue)
    {
        ; 
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(staticTrue)
    {
        free(data);
    }
}
