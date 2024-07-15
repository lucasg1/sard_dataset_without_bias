namespace NAMESPACE0
{
void FUN0(FILE * &data)
{
    data = _wfopen(L"file.txt", L"w+");
}
void FUN1()
{
    FILE * data;
    data = NULL;
    FUN0(data);
    if (data != NULL)
    {
        fclose(data);
    }
}
} 
