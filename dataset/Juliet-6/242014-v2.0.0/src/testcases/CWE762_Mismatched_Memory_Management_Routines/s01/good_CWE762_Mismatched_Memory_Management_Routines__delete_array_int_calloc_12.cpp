namespace NAMESPACE0
{
void FUN0()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    else
    {
        data = (int *)calloc(100, sizeof(int));
        if (data == NULL) {exit(-1);}
    }
    if(globalReturnsTrueOrFalse())
    {
        free(data);
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
    if(globalReturnsTrueOrFalse())
    {
        data = new int[100];
    }
    else
    {
        data = new int[100];
    }
    if(globalReturnsTrueOrFalse())
    {
        delete [] data;
    }
    else
    {
        delete [] data;
    }
}
} 
