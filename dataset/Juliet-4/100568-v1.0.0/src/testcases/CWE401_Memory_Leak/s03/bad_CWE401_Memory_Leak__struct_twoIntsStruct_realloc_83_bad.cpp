namespace NAMESPACE0
{
void FUN0()
{
    struct _twoIntsStruct * data;
    data = NULL;
    NAMESPACE0_FUN0 VAR1(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(struct _twoIntsStruct * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    struct _twoIntsStruct * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(struct _twoIntsStruct * dataCopy)
{
    data = dataCopy;
    data = (struct _twoIntsStruct *)realloc(data, 100*sizeof(struct _twoIntsStruct));
    data[0].intOne = 0;
    data[0].intTwo = 0;
    printStructLine((twoIntsStruct *)&data[0]);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
<END>
    ; 
}
}
