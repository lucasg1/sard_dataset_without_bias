namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(void * dataCopy)
{
    data = dataCopy;
    data = (void *)WIDE_STRING;
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    {
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        memcpy(dest, data, (dataLen+1)*sizeof(wchar_t));
        printWLine((wchar_t *)dest);
        free(dest);
    }
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(void * dataCopy)
{
    data = dataCopy;
    data = (void *)CHAR_STRING;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, 1);
        memcpy(dest, data, (dataLen+1));
        printLine((char *)dest);
        free(dest);
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(void * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    void * data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(void * dataCopy);
    ~NAMESPACE0_FUN1();
private:
    void * data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    void * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR4(data);
}
void FUN1()
{
    void * data;
    data = NULL;
    NAMESPACE0_FUN1 VAR5(data);
}
} 
