namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(double * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    double * data;
};
}
namespace NAMESPACE0
{
void FUN0()
{
    double * data;
    data = NULL;
    NAMESPACE0_FUN0 * VAR2 = new NAMESPACE0_FUN0(data);
    delete VAR2;
}
} 
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(double * dataCopy)
{
    data = dataCopy;
    data = (double *)malloc(sizeof(data));
    *data = 1.7E300;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
    printDoubleLine(*data);
<END>
    free(data);
}
}
