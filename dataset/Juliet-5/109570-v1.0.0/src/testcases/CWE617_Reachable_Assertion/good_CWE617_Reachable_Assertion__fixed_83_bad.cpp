namespace NAMESPACE0
{
void FUN1()
{
    int data;
    data = -1;
    NAMESPACE0_FUN1 VAR1(data);
}
} 
namespace NAMESPACE0
{
void FUN1()
{
    int data;
    data = -1;
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
    data = ASSERT_VALUE+1;
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    assert(data > ASSERT_VALUE);
}
}
namespace NAMESPACE0
{
NAMESPACE0_FUN1::NAMESPACE0_FUN1(int dataCopy)
{
    data = dataCopy;
    data = ASSERT_VALUE+1;
}
NAMESPACE0_FUN1::~NAMESPACE0_FUN1()
{
    assert(data > ASSERT_VALUE);
}
}
