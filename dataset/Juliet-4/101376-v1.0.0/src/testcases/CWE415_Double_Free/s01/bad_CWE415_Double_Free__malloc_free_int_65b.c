void FUN0(int * data);
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    funcPtr(data);
}
void FUN0(int * data)
{
<START>
    free(data);
<END>
}
