namespace NAMESPACE0
{
static int * FUN0(int * data)
{
    data = new int[100];
    return data;
}
void FUN1()
{
    int * data;
    data = NULL;
    data = FUN0(data);
    delete [] data;
}
static int * FUN2(int * data)
{
    data = NULL;
    data = (int *)realloc(data, 100*sizeof(int));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN3()
{
    int * data;
    data = NULL;
    data = FUN2(data);
    free(data);
}
} 
