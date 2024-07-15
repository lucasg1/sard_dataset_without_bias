static int staticFive = 5;
namespace NAMESPACE0
{
void FUN0()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            wchar_t * data;
            data = L"string";
            wchar_t * * pointer = new wchar_t *;
            *pointer = data; 
            {
                wchar_t * data = *pointer;
                printWLine(data);
            }
            delete pointer;
        }
    }
}
void FUN1()
{
    if(staticFive==5)
    {
        {
            wchar_t * data;
            data = L"string";
            wchar_t * * pointer = new wchar_t *;
            *pointer = data; 
            {
                wchar_t * data = *pointer;
                printWLine(data);
            }
            delete pointer;
        }
    }
}
} 
