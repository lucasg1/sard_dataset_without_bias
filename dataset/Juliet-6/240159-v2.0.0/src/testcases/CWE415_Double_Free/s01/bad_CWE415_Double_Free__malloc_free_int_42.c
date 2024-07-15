static int * FUN0(int * data)
{
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    return data;
}
void FUN1()
{
    int * data;
    data = NULL;
    data = FUN0(data);
<START>
    free(data);
<END>
}
