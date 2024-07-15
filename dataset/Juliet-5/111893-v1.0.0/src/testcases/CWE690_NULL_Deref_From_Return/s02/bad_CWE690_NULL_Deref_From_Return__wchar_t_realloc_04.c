static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    wchar_t * data;
    data = NULL; 
    data = (wchar_t *)realloc(data, 20*sizeof(wchar_t));
    if(STATIC_CONST_TRUE)
    {
<START>
        wcscpy(data, L"Initialize");
<END>
        printWLine(data);
        free(data);
    }
}
