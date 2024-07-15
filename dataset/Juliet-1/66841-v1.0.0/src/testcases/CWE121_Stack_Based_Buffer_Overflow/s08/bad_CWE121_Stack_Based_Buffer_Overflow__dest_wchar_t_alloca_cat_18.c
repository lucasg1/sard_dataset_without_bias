void FUN0()
{
    wchar_t * data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    goto source;
source:
    data = dataBadBuffer;
    data[0] = L'\0'; 
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
<START>
        wcscat(data, source);
<END>
        printWLine(data);
    }
}
void FUN1()
{
    wchar_t * data;
    wchar_t * dataBadBuffer = (wchar_t *)ALLOCA(50*sizeof(wchar_t));
    wchar_t * dataGoodBuffer = (wchar_t *)ALLOCA(100*sizeof(wchar_t));
    goto source;
source:
    data = dataGoodBuffer;
    data[0] = L'\0'; 
    {
        wchar_t source[100];
        wmemset(source, L'C', 100-1); 
        source[100-1] = L'\0'; 
        wcscat(data, source);
        printWLine(data);
    }
}
int FUN2(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
    printLine("Calling good()...");
    FUN2();
    printLine("Finished good()");
    printLine("Calling bad()...");
    FUN0();
    printLine("Finished bad()");
    return 0;
}
