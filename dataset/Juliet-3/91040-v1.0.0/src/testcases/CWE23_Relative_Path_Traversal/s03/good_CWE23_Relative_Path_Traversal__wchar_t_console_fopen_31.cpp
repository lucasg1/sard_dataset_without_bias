namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    wcscat(data, L"file.txt");
    {
        wchar_t * dataCopy = data;
        wchar_t * data = dataCopy;
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
