typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_34_unionType myUnion;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0';
    {
        size_t dataLen = wcslen(data);
        wchar_t * environment = GETENV(ENV_VARIABLE);
        if (environment != NULL)
        {
            wcsncat(data+dataLen, environment, 100-dataLen-1);
        }
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            size_t i;
            for (i=0; i < wcslen(data); i++)
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
}
