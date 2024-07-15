void FUN0()
{
    int j;
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    for(j = 0; j < 1; j++)
    {
<START>
        fclose(data);
<END>
    }
}
