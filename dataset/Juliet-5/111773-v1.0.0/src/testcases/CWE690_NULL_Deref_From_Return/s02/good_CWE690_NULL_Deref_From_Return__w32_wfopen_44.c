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
    void (*funcPtr) (FILE *) = FUN0;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    funcPtr(data);
}
