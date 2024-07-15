void FUN0()
{
    int k;
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    for(k = 0; k < 1; k++)
    {
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
