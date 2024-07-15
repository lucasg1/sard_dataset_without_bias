namespace NAMESPACE0
{
void FUN0(wchar_t * &data)
{
    wcscpy(data, L"winsrv.dll");
}
} 
namespace NAMESPACE0
{
void FUN0(wchar_t * &data);
void FUN2()
{
    wchar_t * data;
    wchar_t dataBuffer[100] = L"";
    data = dataBuffer;
    FUN0(data);
    {
        HMODULE hModule;
<START>
        hModule = LoadLibraryW(data);
<END>
        if (hModule != NULL)
        {
            FreeLibrary(hModule);
            printLine("Library loaded and freed successfully");
        }
        else
        {
            printLine("Unable to load library");
        }
    }
}
} 
