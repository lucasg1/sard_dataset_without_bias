namespace NAMESPACE0
{
void FUN0()
{
    short data;
    data = -1;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(data);
    delete VAR1;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(short dataCopy);
    ~NAMESPACE0_FUN1();
private:
    short data;
};
}
namespace NAMESPACE0
{
void FUN1()
{
    short data;
    data = -1;
    NAMESPACE0_FUN1 * VAR1 = new NAMESPACE0_FUN1(data);
    delete VAR1;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(short dataCopy);
    ~NAMESPACE0_FUN1();
private:
    short data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(short dataCopy)
{
    data = dataCopy;
    fscanf (stdin, "%hd", &data);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    {
<START>
        char charData = (char)data;
<END>
        printHexCharLine(charData);
    }
}
}
