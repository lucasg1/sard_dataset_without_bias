namespace NAMESPACE0
{
class NAMESPACE0_FUN2
{
public:
    NAMESPACE0_FUN2(short dataCopy);
    ~NAMESPACE0_FUN2();
private:
    short data;
};
}
namespace NAMESPACE0
{
void FUN2()
{
    short data;
    data = -1;
    NAMESPACE0_FUN2 VAR2(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN2::NAMESPACE0_FUN2(short dataCopy)
{
    data = dataCopy;
    data = CHAR_MAX-5;
}
NAMESPACE0_FUN2::~NAMESPACE0_FUN2()
{
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN2
{
public:
    NAMESPACE0_FUN2(short dataCopy);
    ~NAMESPACE0_FUN2();
private:
    short data;
};
}
namespace NAMESPACE0
{
void FUN2()
{
    short data;
    data = -1;
    NAMESPACE0_FUN2 VAR2(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN2::NAMESPACE0_FUN2(short dataCopy)
{
    data = dataCopy;
    data = CHAR_MAX-5;
}
NAMESPACE0_FUN2::~NAMESPACE0_FUN2()
{
    {
        char charData = (char)data;
        printHexCharLine(charData);
    }
}
}
