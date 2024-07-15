namespace NAMESPACE0
{
NAMESPACE0_FUN2::NAMESPACE0_FUN2(int dataCopy)
{
    data = dataCopy;
    data = ASSERT_VALUE+1;
}
NAMESPACE0_FUN2::~NAMESPACE0_FUN2()
{
    assert(data > ASSERT_VALUE);
}
}
namespace NAMESPACE0
{
void FUN2()
{
    int data;
    data = -1;
    NAMESPACE0_FUN2 * VAR2 =  new NAMESPACE0_FUN2(data);
    delete VAR2;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN2
{
public:
    NAMESPACE0_FUN2(int dataCopy);
    ~NAMESPACE0_FUN2();
private:
    int data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN2::NAMESPACE0_FUN2(int dataCopy)
{
    data = dataCopy;
    data = ASSERT_VALUE+1;
}
NAMESPACE0_FUN2::~NAMESPACE0_FUN2()
{
    assert(data > ASSERT_VALUE);
}
}
namespace NAMESPACE0
{
void FUN2()
{
    int data;
    data = -1;
    NAMESPACE0_FUN2 * VAR2 =  new NAMESPACE0_FUN2(data);
    delete VAR2;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN2
{
public:
    NAMESPACE0_FUN2(int dataCopy);
    ~NAMESPACE0_FUN2();
private:
    int data;
};
}
