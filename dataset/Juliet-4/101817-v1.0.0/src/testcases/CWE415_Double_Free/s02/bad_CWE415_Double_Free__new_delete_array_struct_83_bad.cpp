namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(twoIntsStruct * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    twoIntsStruct * data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR2(data);
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(twoIntsStruct * dataCopy)
{
    data = dataCopy;
    data = new twoIntsStruct[100];
    delete [] data;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
    delete [] data;
<END>
}
}
