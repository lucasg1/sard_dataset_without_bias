namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(char dataCopy)
{
    data = dataCopy;
    data = 'C';
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    printHexCharLine(data);
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(char dataCopy);
    ~NAMESPACE0_FUN0();
private:
    char data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(char dataCopy);
    ~NAMESPACE0_FUN1();
private:
    char data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char dataCopy)
{
    data = dataCopy;
    data = 'C';
    printHexCharLine(data);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    data = 'Z';
    printHexCharLine(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    char data;
    NAMESPACE0_FUN0 VAR4(data);
}
void FUN1()
{
    char data;
    NAMESPACE0_FUN1 VAR5(data);
}
} 
