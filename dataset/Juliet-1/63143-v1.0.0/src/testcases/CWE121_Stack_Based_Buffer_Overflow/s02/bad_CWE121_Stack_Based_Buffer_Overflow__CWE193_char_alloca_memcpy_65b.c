void FUN0(char * data);
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char * VAR0 = (char *)ALLOCA((10)*sizeof(char));
    char * VAR1 = (char *)ALLOCA((10+1)*sizeof(char));
    data = VAR0;
    data[0] = '\0'; 
    funcPtr(data);
}
void FUN0(char * data)
{
    {
        char source[10+1] = SRC_STRING;
<START>
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
<END>
        printLine(data);
    }
}
