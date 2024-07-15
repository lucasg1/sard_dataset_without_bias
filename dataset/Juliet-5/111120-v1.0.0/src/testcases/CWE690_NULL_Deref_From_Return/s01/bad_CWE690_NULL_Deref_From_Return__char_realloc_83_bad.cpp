namespace NAMESPACE0
{
void FUN0()
{
    char * data;
    data = NULL; 
    NAMESPACE0_FUN0 VAR1(data);
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_FUN0
{
public:
    NAMESPACE0_FUN0(char * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    char * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(char * dataCopy)
{
    data = dataCopy;
    data = (char *)realloc(data, 20*sizeof(char));
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
    strcpy(data, "Initialize");
<END>
    printLine(data);
    free(data);
}
}
