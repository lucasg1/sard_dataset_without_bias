static int VAR0 = 0;
static char * FUN0(char * data)
{
    if(VAR0)
    {
        data = (char *)malloc(50*sizeof(char));
        if (data == NULL) {exit(-1);}
        data[0] = '\0'; 
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
        char source[100];
        memset(source, 'C', 100-1); 
        source[100-1] = '\0'; 
<START>
        SNPRINTF(data, 100, "%s", source);
<END>
        printLine(data);
        free(data);
    }
}
