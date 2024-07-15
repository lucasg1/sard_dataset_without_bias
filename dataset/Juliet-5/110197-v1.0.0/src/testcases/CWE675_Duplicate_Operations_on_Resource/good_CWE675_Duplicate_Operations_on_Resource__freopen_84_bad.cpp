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
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(FILE * dataCopy);
    ~NAMESPACE0_FUN1();
private:
    FILE * data;
};
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
void FUN1()
{
    FILE * data;
    data = NULL; 
    NAMESPACE0_FUN1 * VAR3 = new NAMESPACE0_FUN1(data);
    delete VAR3;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(FILE * dataCopy)
{
    data = dataCopy;
    data = freopen("BadSource_freopen.txt","w+",stdin);
    fclose(data);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    ; 
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(FILE * dataCopy)
{
    data = dataCopy;
    data = fopen("GoodSource_fopen.txt", "w+");
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    fclose(data);
}
}
