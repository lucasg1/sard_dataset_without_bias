namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = NULL;
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(globalFalse)
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
    if(globalTrue)
    {
        data = NULL;
        data = (int *)realloc(data, 100*sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(globalTrue)
    {
        free(data);
    }
}
void FUN2()
{
    int * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
void FUN3()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int[100];
    }
    if(globalTrue)
    {
        delete [] data;
    }
}
} 
