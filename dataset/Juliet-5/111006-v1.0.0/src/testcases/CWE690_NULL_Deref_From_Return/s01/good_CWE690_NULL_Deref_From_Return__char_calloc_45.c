static char * VAR0;
static char * VAR1;
void FUN0()
{
    char * data = VAR1;
    if (data != NULL)
    {
        strcpy(data, "Initialize");
        printLine(data);
        free(data);
    }
}
void FUN1()
{
    char * data;
    data = NULL; 
    data = (char *)calloc(20, sizeof(char));
    VAR1 = data;
    FUN0();
}
