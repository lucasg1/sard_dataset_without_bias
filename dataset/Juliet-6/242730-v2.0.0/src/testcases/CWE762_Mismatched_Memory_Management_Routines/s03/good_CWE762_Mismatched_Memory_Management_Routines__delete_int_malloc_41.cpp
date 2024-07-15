namespace NAMESPACE0
{
void FUN0(int * data)
{
    delete data;
}
void FUN1()
{
    int * data;
    data = NULL;
    data = new int;
    FUN0(data);
}
void FUN2(int * data)
{
    free(data);
}
void FUN3()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    FUN2(data);
}
} 
