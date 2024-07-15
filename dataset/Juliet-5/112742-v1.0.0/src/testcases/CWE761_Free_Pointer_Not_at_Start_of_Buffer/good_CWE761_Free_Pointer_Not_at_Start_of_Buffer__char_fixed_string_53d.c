void FUN0(char * data);
void FUN1()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0';
    strcpy(data, BAD_SOURCE_FIXED_STRING);
    FUN0(data);
}
void FUN3(char * data);
void FUN4(char * data)
{
    FUN3(data);
}
void FUN4(char * data);
void FUN0(char * data)
{
    FUN4(data);
}
void FUN3(char * data)
{
    {
        size_t i;
        for (i=0; i < strlen(data); i++)
        {
            if (data[i] == SEARCH_CHAR)
            {
                printLine("We have a match!");
                break;
            }
        }
        free(data);
    }
}
