namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    NAMESPACE0_FUN0 * VAR1 = new NAMESPACE0_FUN0(data);
    delete VAR1;
}
} 
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
NAMESPACE0_FUN0::NAMESPACE0_FUN0(twoIntsStruct * dataCopy)
{
    data = dataCopy;
    data = (twoIntsStruct *)calloc(100, sizeof(twoIntsStruct));
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
    delete [] data;
<END>
}
}
