namespace NAMESPACE0
{
void FUN0()
{
    int h;
    wchar_t * data;
    wchar_t dataBuffer[FILENAME_MAX] = BASEPATH;
    data = dataBuffer;
    for(h = 0; h < 1; h++)
    {
        wcscat(data, L"file.txt");
    }
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
