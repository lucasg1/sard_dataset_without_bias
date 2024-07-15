namespace NAMESPACE0
{
void FUN0()
{
    int data;
    data = 0;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(int dataCopy);
    ~NAMESPACE0_FUN0();
private:
    int data;
};
}
namespace NAMESPACE0
{
void FUN1()
{
    int data;
    data = 0;
    NAMESPACE0_FUN1 VAR1(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(int dataCopy);
    ~NAMESPACE0_FUN1();
private:
    int data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int dataCopy)
{
    data = dataCopy;
    data = INT_MAX;
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    {
<START>
        int result = data * data;
<END>
        printIntLine(result);
    }
}
}
