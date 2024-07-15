namespace NAMESPACE0
{
void FUN0()
{
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        free(data);
    }
}
void FUN1()
{
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
    }
    if(5==5)
    {
        free(data);
    }
}
void FUN2()
{
    int64_t * data;
    data = NULL;
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
void FUN3()
{
    int64_t * data;
    data = NULL;
    if(5==5)
    {
        data = new int64_t[100];
    }
    if(5==5)
    {
        delete [] data;
    }
}
} 
