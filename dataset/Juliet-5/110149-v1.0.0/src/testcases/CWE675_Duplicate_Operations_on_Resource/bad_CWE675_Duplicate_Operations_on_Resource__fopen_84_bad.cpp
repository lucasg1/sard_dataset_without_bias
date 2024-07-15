namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
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
    NAMESPACE0_FUN0(FILE * dataCopy);
    ~NAMESPACE0_FUN0();
private:
    FILE * data;
};
}
namespace NAMESPACE0
{
NAMESPACE0_FUN0::NAMESPACE0_FUN0(FILE * dataCopy)
{
    data = dataCopy;
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
}
NAMESPACE0_FUN0::~NAMESPACE0_FUN0()
{
<START>
    fclose(data);
<END>
}
}
