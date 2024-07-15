void FUN0()
{
    if(globalTrue)
    {
<START>
        fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout);
<END>
    }
}
