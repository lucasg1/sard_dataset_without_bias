char * FUN0(char * data)
{
    strcpy(data, BAD_SOURCE_FIXED_STRING);
    return data;
}
char * FUN0(char * data);
void FUN2()
{
    char * data;
    data = (char *)malloc(100*sizeof(char));
    data[0] = '\0';
    data = FUN0(data);
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
