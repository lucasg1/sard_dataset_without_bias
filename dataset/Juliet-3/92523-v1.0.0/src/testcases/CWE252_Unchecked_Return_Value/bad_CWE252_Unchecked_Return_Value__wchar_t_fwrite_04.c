static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
<START>
        fwrite((wchar_t *)L"string", sizeof(wchar_t), wcslen(L"string"), stdout);
<END>
    }
}
