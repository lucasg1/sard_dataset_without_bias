namespace NAMESPACE0
{
void FUN0(int * data)
{
<START>
    delete data;
<END>
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = (int *)calloc(100, sizeof(int));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
} 
