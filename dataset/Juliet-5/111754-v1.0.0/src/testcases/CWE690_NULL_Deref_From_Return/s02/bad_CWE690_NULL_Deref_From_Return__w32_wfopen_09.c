void FUN0()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    if(GLOBAL_CONST_TRUE)
    {
<START>
        fclose(data);
<END>
    }
}
