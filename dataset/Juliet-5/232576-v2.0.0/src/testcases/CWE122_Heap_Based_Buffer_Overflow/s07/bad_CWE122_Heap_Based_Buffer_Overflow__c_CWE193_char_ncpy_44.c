void FUN0(char * data)
{
    {
        char source[10+1] = SRC_STRING;
<START>
        strncpy(data, source, strlen(source) + 1);
<END>
        printLine(data);
        free(data);
    }
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    data = NULL;
    data = (char *)malloc(10*sizeof(char));
    if (data == NULL) {exit(-1);}
    funcPtr(data);
}
