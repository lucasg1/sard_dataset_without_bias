int * FUN0(int * data)
{
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    free(data);
    return data;
}
int * FUN0(int * data);
void FUN2()
{
    int * data;
    data = NULL;
    data = FUN0(data);
<START>
    free(data);
<END>
}
