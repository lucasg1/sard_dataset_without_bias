static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout);
<END>
    }
}
