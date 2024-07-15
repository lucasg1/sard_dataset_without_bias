namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(float dataCopy)
{
    data = dataCopy;
    fscanf (stdin, "%f", &data);
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    if(fabs(data) > 0.000001)
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
    else
    {
        printLine("This would result in a divide by zero");
    }
}
}
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(float dataCopy);
    ~NAMESPACE0_FUN0();
private:
    float data;
};
class NAMESPACE0_FUN1
{
public:
    NAMESPACE0_FUN1(float dataCopy);
    ~NAMESPACE0_FUN1();
private:
    float data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    float data;
    data = 0.0F;
    NAMESPACE0_FUN0 VAR3(data);
}
void FUN1()
{
    float data;
    data = 0.0F;
    NAMESPACE0_FUN1 VAR4(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(float dataCopy)
{
    data = dataCopy;
    data = 2.0F;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    {
        int result = (int)(100.0 / data);
        printIntLine(result);
    }
}
}
