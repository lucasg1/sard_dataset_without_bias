static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wcscpy(data, L"A String");
        printWLine(data);
    }
    if(staticTrue)
    {
<START>
<END>
        ; 
    }
}
