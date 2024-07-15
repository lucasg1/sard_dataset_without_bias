void FUN0(char * data)
{
    {
        char source[10+1] = SRC_STRING;
        memcpy(data, source, (strlen(source) + 1) * sizeof(char));
        printLine(data);
    }
}
void FUN1()
{
    char * data;
    void (*funcPtr) (char *) = FUN0;
    char VAR0[10];
    char VAR1[10+1];
    data = VAR1;
    data[0] = '\0'; 
    funcPtr(data);
}
