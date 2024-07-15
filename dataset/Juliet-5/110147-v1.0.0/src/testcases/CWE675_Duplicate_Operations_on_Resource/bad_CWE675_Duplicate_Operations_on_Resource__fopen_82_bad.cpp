namespace NAMESPACE0
{
void FUN0()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    NAMESPACE0_base* baseObject = new NAMESPACE0_FUN0;
    baseObject->action(data);
    delete baseObject;
}
} 
namespace NAMESPACE0
{
class NAMESPACE0_base
{
public:
    virtual void action(FILE * data) = 0;
};
class NAMESPACE0_FUN0 : public NAMESPACE0_base
{
public:
    void action(FILE * data);
};
}
namespace NAMESPACE0
{
void NAMESPACE0_FUN0::action(FILE * data)
{
<START>
    fclose(data);
<END>
}
}
