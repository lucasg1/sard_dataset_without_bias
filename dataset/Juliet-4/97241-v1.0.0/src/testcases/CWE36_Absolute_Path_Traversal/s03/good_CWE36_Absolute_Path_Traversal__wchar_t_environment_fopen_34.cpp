namespace NAMESPACE0
{
typedef union
{
    wchar_t * unionFirst;
    wchar_t * unionSecond;
} unionType;
void FUN0()
{
    wchar_t * data;
    unionType myUnion;
    wchar_t dataBuffer[FILENAME_MAX] = L"";
    data = dataBuffer;
    wcscat(data, L"c:\\temp\\file.txt");
    wcscat(data, L"/tmp/file.txt");
    myUnion.unionFirst = data;
    {
        wchar_t * data = myUnion.unionSecond;
        {
            FILE *pFile = NULL;
            pFile = FOPEN(data, L"wb+");
            if (pFile != NULL)
            {
                fclose(pFile);
            }
        }
    }
}
} 
