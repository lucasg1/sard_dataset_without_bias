static int staticFive = 5;
void FUN0()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    if(staticFive==5)
    {
<START>
        fclose(data);
<END>
    }
}
