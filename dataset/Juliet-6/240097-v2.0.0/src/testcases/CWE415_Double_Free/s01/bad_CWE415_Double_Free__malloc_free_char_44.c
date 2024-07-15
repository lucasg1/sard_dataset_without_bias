void FUN0(char * data)
{
<START>
    free(data);
<END>
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    free(data);
    funcPtr(data);
}
