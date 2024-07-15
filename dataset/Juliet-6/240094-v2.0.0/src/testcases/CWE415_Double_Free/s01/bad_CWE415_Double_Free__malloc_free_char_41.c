void FUN0(char * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    char * data;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    free(data);
    FUN0(data);
}
