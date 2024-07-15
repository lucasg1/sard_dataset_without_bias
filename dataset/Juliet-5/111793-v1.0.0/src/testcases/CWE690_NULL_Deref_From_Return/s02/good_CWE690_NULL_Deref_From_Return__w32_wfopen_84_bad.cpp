namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(FILE * dataCopy)
{
    data = dataCopy;
    data = _wfopen(L"file.txt", L"w+");
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    if (data != NULL)
    {
        fclose(data);
    }
}
}
namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    data = NULL;
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(data);
    delete VAR2;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(FILE * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    FILE * data;
};
}
