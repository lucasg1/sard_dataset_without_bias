void FUN0(int * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    int * data;
    void (*funcPtr) (int *) = FUN0;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    funcPtr(data);
}
