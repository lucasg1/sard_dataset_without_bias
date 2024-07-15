namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(wchar_t * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    wchar_t * data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    wchar_t * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR2(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(wchar_t * dataCopy)
{
    data = dataCopy;
    {
        wchar_t * dataBuffer = new wchar_t[100];
        wmemset(dataBuffer, L'A', 100-1);
        dataBuffer[100-1] = L'\0';
        data = dataBuffer;
    }
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        size_t i;
        wchar_t dest[100];
        wmemset(dest, L'C', 100-1); 
        dest[100-1] = L'\0'; 
        for (i = 0; i < 100; i++)
        {
            dest[i] = data[i];
        }
        dest[100-1] = L'\0';
        printWLine(dest);
    }
}
}
