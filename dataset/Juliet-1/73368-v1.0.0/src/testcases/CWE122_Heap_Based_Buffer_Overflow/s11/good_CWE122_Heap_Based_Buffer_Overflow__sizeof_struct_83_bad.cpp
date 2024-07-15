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
    data = (twoIntsStruct *)malloc(sizeof(*data));
    data->intOne = 1;
    data->intTwo = 2;
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
    printStructLine(data);
    free(data);
}
}
namespace NAMESPACE0
{
void FUN0()
{
    twoIntsStruct * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR3(data);
}
} 
