void FUN0()
{
    if(GLOBAL_CONST_TRUE)
    {
<START>
        fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout);
<END>
    }
}
