FILE * FUN0(FILE * data)
{
    data = _wfopen(L"file.txt", L"w+");
    return data;
}
FILE * FUN0(FILE * data);
void FUN2()
{
    FILE * data;
    data = NULL;
    data = FUN0(data);
    if (data != NULL)
    {
        fclose(data);
    }
}
