static FILE * FUN0(FILE * data)
{
    data = _wfopen(L"file.txt", L"w+");
    return data;
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = FUN0(data);
    if (data != NULL)
    {
        fclose(data);
    }
}
