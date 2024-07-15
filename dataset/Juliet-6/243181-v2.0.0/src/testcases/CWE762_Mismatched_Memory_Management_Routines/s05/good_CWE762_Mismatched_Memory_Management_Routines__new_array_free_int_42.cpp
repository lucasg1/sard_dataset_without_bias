namespace NAMESPACE0
{
static int * FUN0(int * data)
{
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    return data;
}
void FUN1()
{
    int * data;
    data = NULL;
    data = FUN0(data);
    free(data);
}
static int * FUN2(int * data)
{
    data = new int[100];
    return data;
}
void FUN3()
{
    int * data;
    data = NULL;
    data = FUN2(data);
    delete [] data;
}
} 
