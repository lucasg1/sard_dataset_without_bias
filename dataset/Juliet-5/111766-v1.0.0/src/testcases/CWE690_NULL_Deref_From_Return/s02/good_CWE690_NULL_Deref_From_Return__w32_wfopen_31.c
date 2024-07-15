void FUN0()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    {
        FILE * dataCopy = data;
        FILE * data = dataCopy;
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
