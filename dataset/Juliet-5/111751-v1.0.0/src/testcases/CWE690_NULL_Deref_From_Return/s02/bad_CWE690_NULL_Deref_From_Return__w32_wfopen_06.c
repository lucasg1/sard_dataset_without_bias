static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    FILE * data;
    data = NULL;
    data = _wfopen(L"file.txt", L"w+");
    if(STATIC_CONST_FIVE==5)
    {
<START>
        fclose(data);
<END>
    }
}
