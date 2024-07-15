void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = (char *)malloc(100*sizeof(char));
    free(data);
    funcPtr(data);
}
void FUN0(char * data)
{
<START>
    free(data);
<END>
}
