void FUN0(FILE * * dataPtr);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    FUN0(&data);
}
void FUN0(FILE * * dataPtr)
{
    FILE * data = *dataPtr;
<START>
    fclose(data);
<END>
}
