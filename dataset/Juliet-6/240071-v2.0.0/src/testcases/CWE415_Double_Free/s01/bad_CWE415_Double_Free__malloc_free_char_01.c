void FUN0()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
<START>
    free(data);
<END>
    free(data);
}
