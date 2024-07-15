void FUN0(int * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    FUN0(data);
}
