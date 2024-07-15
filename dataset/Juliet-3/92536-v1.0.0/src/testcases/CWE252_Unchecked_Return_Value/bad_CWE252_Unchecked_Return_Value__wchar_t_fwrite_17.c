void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
<START>
        fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout);
<END>
    }
}
