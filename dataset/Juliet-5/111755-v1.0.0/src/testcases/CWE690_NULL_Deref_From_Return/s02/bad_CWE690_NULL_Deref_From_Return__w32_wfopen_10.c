void FUN0()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    if(globalTrue)
    {
<START>
        fclose(data);
<END>
    }
}
