void FUN0()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    if(globalFive==5)
    {
<START>
        fclose(data);
<END>
    }
}
