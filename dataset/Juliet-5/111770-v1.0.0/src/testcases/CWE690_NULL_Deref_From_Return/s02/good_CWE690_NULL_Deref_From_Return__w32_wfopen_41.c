void FUN0(FILE * data)
{
    if (data != NULL)
    {
        fclose(data);
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    FUN0(data);
}
