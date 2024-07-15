namespace NAMESPACE0
{
void FUN0(int * &data)
{
    data = new int;
}
void FUN1()
{
    int * data;
    data = NULL;
    FUN0(data);
    delete data;
}
void FUN2(int * &data)
{
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
}
void FUN3()
{
    int * data;
    data = NULL;
    FUN2(data);
    free(data);
}
} 
