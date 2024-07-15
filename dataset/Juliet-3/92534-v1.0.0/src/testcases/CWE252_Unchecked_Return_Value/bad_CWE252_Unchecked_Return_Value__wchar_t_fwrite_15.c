void FUN0()
{
    switch(6)
    {
    case 6:
<START>
        fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout);
<END>
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}
