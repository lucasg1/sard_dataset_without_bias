typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_34_unionType;
void FUN0()
{
    char * data;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__char_environment_34_unionType myUnion;
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    data[0] = '\0';
    {
        size_t dataLen = strlen(data);
        char * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            strncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
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
