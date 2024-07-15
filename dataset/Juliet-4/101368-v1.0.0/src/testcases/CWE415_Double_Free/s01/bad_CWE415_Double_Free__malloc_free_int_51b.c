void FUN0(int * data);
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    free(data);
    FUN0(data);
}
void FUN0(int * data)
{
<START>
    free(data);
<END>
}
