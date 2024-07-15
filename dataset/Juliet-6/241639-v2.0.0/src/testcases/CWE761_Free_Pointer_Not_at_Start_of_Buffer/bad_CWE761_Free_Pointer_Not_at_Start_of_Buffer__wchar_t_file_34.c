typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_34_unionType;
void FUN0()
{
    wchar_t * data;
    CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_34_unionType myUnion;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    data[0] = L'\0';
    {
        size_t dataLen = wcslen(data);
        FILE * pFile;
        if (100-dataLen > 1)
        {
            pFile = fopen(FILENAME, "r");
            if (pFile != NULL)
            {
                if (fgetws(data+dataLen, (int)(100-dataLen), pFile) == NULL)
                {
                    printLine("fgetws() failed");
                    data[dataLen] = L'\0';
                }
                fclose(pFile);
            }
        }
    }
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
<START>
        for (; *data != L'\0'; data++)
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
