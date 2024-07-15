namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    data = NULL; 
    NAMESPACE0_FUN0 VAR1(data);
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    NAMESPACE0_FUN1 VAR2(data);
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
