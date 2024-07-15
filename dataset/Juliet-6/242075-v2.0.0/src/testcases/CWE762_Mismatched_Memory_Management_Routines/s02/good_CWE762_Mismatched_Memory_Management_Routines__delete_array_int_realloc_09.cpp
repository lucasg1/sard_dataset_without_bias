namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = NULL;
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FALSE)
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
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = NULL;
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_TRUE)
    {
        free(data);
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int[100];
    }
    if(GLOBAL_CONST_TRUE)
    {
        delete [] data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new int[100];
    }
    if(GLOBAL_CONST_TRUE)
    {
        delete [] data;
    }
}
} 
