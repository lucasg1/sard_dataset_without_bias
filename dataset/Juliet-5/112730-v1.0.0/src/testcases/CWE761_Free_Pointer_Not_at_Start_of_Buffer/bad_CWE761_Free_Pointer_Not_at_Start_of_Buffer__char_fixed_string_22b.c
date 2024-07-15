int VAR0 = 0;
void FUN0(char * data);
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0';
    strcpy(data, BAD_SOURCE_FIXED_STRING);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(char * data)
{
    if(VAR0)
    {
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
}
