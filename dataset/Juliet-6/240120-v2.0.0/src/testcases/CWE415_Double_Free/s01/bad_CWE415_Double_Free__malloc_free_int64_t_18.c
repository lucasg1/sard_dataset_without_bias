void FUN0()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
<START>
    free(data);
<END>
    goto sink;
sink:
    free(data);
}
