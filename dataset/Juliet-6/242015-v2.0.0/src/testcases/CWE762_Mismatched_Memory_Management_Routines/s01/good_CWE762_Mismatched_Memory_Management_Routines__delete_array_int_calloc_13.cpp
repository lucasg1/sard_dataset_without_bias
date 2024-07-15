namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        free(data);
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int[100];
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        delete [] data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new int[100];
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        delete [] data;
    }
}
} 
