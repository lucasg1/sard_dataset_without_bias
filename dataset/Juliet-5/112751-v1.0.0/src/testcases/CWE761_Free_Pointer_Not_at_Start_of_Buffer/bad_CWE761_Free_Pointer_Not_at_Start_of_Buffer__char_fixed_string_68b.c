char * VAR0;
char * VAR1;
void FUN0();
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0';
    strcpy(data, BAD_SOURCE_FIXED_STRING);
    VAR0 = data;
    FUN0();
}
extern char * VAR0;
extern char * VAR1;
void FUN0()
{
    char * data = VAR0;
<START>
    for (; *data != '\0'; data++)
<END>
    {
        if (*data == SEARCH_CHAR)
        {
            printLine("We have a match!");
            break;
        }
    }
    free(data);
}
