namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    wchar_t * &dataRef = data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    wcscat(data, L"file.txt");
    {
        wchar_t * data = dataRef;
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
