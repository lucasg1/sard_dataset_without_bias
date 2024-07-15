static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
<START>
        if (fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout) < 0)
<END>
        {
            printLine("fwrite failed!");
        }
    }
}
