static int VAR0 = 0;
static char * FUN0(char * data)
{
    if(VAR0)
    {
        data = (char *)malloc(10*sizeof(char));
        if (data == NULL) {exit(-1);}
    }
    return data;
}
void FUN1()
{
    char * data;
    data = NULL;
    VAR0 = 1; 
    data = FUN0(data);
    {
        char source[10+1] = SRC_STRING;
<START>
        memmove(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
        free(data);
    }
}
